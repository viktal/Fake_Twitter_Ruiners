#include "gtest/gtest.h"
#include "fake_twitter/view/Navbar.h"
#include "fake_twitter/model/BasicUser.h"

using namespace fake_twitter;
using namespace fake_twitter::view;

class test_f_for_profile: public ::testing::Test {
public:
    std::chrono::time_point<std::chrono::system_clock> createDate = std::chrono::system_clock::now();
    std::shared_ptr<const model::IUser> user = std::make_shared<model::BasicUser>(1, true, "name", "login", 123, "avatar", createDate, 0, 0);

    Navbar *navbar = new Navbar(user);

};

TEST_F(test_f_for_profile, unit_test1) {
    EXPECT_EQ(this->navbar->render(), "");
}