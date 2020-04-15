#include <memory>
#include "fake_twitter/view/Profile.h"

using namespace fake_twitter;
using namespace fake_twitter::view;

Profile::Profile(std::shared_ptr<const model::IUser> &) {

}

HTML Profile::render() {
    return "";
}
