
#include "gtest/gtest.h"
#include "fake_twitter/view/RightMenu.h"
#include "fake_twitter/model/BasicUser.h"

using namespace fake_twitter;
using namespace fake_twitter::view;

class test_f_for_Rightmenu: public ::testing::Test {
public:
    std::chrono::time_point<std::chrono::system_clock> createDate = std::chrono::system_clock::now();
    std::shared_ptr<const model::IUser> user = std::make_shared<model::BasicUser>(1, true, "name", "login", 123, "avatar", createDate, 0, 0);

    RightMenu *twit = new RightMenu(user);

};

TEST_F(test_f_for_Rightmenu, unit_test1) {
    EXPECT_EQ(this->twit->render(), "");
}