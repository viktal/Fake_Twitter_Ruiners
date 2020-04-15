#include "gtest/gtest.h"
#include "fake_twitter/model/ITwit.h"
#include <chrono>
#include "fake_twitter/model/BasicTwit.h"

using namespace fake_twitter::model;


class test_f_for_twit: public ::testing::Test {
public:
    std::chrono::time_point<std::chrono::system_clock> createDate = std::chrono::system_clock::now();
    BasicTwit *twit = new BasicTwit (1, 2,"body", createDate, 0, 0);

};

TEST_F(test_f_for_twit, unit_test1) {
    EXPECT_EQ(this->twit->id(), 1);
    EXPECT_EQ(this->twit->author(), 2);
    EXPECT_EQ(this->twit->body(), "body");
    int difference = std::chrono::duration_cast<std::chrono::seconds>
            (this->twit->date()-this->createDate).count();
    EXPECT_EQ( difference, 0);
    EXPECT_EQ(*(this->twit->retwitedFrom()), NULL);

}


TEST_F(test_f_for_twit, unit_test2) {
    this->twit->author(3);
    EXPECT_EQ(this->twit->author(), 3);
    this->twit->body("body1");
    EXPECT_EQ(this->twit->body(), "body1");

    this->createDate += std::chrono::hours(5);
    this->twit->date(this->createDate);
    int difference = std::chrono::duration_cast<std::chrono::seconds>
            (this->twit->date()-this->createDate).count();
    EXPECT_EQ( difference, 0);

    this->twit->retwitedFrom(4);
    EXPECT_EQ(*(this->twit->retwitedFrom()), 4);

}
