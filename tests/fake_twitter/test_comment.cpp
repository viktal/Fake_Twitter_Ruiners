#include "gtest/gtest.h"
#include "fake_twitter/model/IComment.h"
#include "fake_twitter/model/ITag.h"
#include <chrono>
#include "fake_twitter/model/BasicComment.h"
#include "fake_twitter/model/Tag.h"

using namespace fake_twitter::model;

class test_f_for_comment: public ::testing::Test {
public:
    std::chrono::time_point<std::chrono::system_clock> createDate = std::chrono::system_clock::now();
    BasicComment *comment = new BasicComment (1, 2,"body", createDate, 0);

};

TEST_F(test_f_for_comment, unit_test1) {
    EXPECT_EQ(this->comment->id(), 1);
    EXPECT_EQ(this->comment->author(), 2);
    EXPECT_EQ(this->comment->body(), "body");
    int difference = std::chrono::duration_cast<std::chrono::seconds>
            (this->comment->date()-this->createDate).count();
    EXPECT_EQ( difference, 0);
    EXPECT_EQ(*(this->comment->Original()), 0);

}


TEST_F(test_f_for_comment, unit_test2) {
    this->comment->author(3);
    EXPECT_EQ(this->comment->author(), 3);
    this->comment->body("body1");
    EXPECT_EQ(this->comment->body(), "body1");

    this->createDate += std::chrono::hours(5);
    this->comment->date(this->createDate);
    int difference = std::chrono::duration_cast<std::chrono::seconds>
            (this->comment->date()-this->createDate).count();
    EXPECT_EQ( difference, 0);

    this->comment->Original(4);
    EXPECT_EQ(*(this->comment->Original()), 4);

}

class test_f_for_tag: public ::testing::Test {
public:
    Tag *tag = new Tag ("Dota");

};

TEST_F(test_f_for_tag, unit_test3) {
    EXPECT_EQ(this->tag->title(),  "Dota");
    tag->title("CS");
    EXPECT_EQ(this->tag->title(),  "CS");
}
