#include <memory>
#include "fake_twitter/view/Navbar.h"

using namespace fake_twitter;
using namespace fake_twitter::view;


Navbar::Navbar(std::shared_ptr<const model::IUser> &) {

}

HTML Navbar::render() {
    return "";
}
