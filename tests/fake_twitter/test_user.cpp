#include "gtest/gtest.h"
#include "fake_twitter/model/IUser.h"
#include <chrono>
#include "fake_twitter/model/BasicUser.h"

using namespace fake_twitter::model;


class test_f_for_user: public ::testing::Test {
public:
    std::chrono::time_point<std::chrono::system_clock> createDate = std::chrono::system_clock::now();
    BasicUser *user = new BasicUser (1, true, "name", "login", 123, "avatar", createDate, 0, 0);

};

/*TEST_F(test_f_for_user, unit_test1) {
    EXPECT_EQ(this->user->id(), 1);
    //EXPECT_EQ(this->user->is_authorized(), true);
    //EXPECT_EQ(this->user->name(), "name");
    //EXPECT_EQ(this->user->login(), "login");
    //EXPECT_EQ(this->user->passwordHash(), 123);
    //EXPECT_EQ(this->user->avatar(), "avatar");
    //int difference = std::chrono::duration_cast<std::chrono::seconds>
    //        (this->user->regDate()-this->createDate).count();
    //EXPECT_EQ( difference, 0);
}


/*TEST_F(test_f_for_user, unit_test2) {
    this->user->is_authorized(false);
    EXPECT_EQ(this->user->is_authorized(), false);
    this->user->name("name1");
    EXPECT_EQ(this->user->name(), "name1");
    this->user->login("login1");
    EXPECT_EQ(this->user->login(), "login1");
    this->user->passwordHash(124);
    EXPECT_EQ(this->user->passwordHash(), 124);
    this->user->avatar("avatar1");
    EXPECT_EQ(this->user->avatar(), "avatar1");
    this->createDate += std::chrono::hours(5);
    this->user->regDate(this->createDate);
    int difference = std::chrono::duration_cast<std::chrono::seconds>
            (this->user->regDate()-this->createDate).count();
    EXPECT_EQ( difference, 0);
    this->user->countFollow(10);
    EXPECT_EQ(this->user->countFollow(), 10);
    this->user->countFollower(20);
    EXPECT_EQ(this->user->countFollower(), 20);
}*/
