
#include "gtest/gtest.h"
#include "fake_twitter/view/LeftMenu.h"
#include "fake_twitter/model/BasicUser.h"

using namespace fake_twitter;
using namespace fake_twitter::view;

class test_f_for_leftmenu: public ::testing::Test {
public:
    std::chrono::time_point<std::chrono::system_clock> createDate = std::chrono::system_clock::now();
    std::shared_ptr<const model::IUser> user = std::make_shared<model::BasicUser>(1, true, "name", "login", 123, "avatar", createDate, 0, 0);

    LeftMenu *twit = new LeftMenu(user);

};

TEST_F(test_f_for_leftmenu, unit_test1) {
    EXPECT_EQ(this->twit->render(), "");
}