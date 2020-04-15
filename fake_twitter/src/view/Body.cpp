#include <memory>
#include "fake_twitter/view/Body.h"

using namespace fake_twitter;
using namespace fake_twitter::view;

Body::Body(std::shared_ptr<const model::IUser> &) {

}

HTML Body::render() {
    return "";
}
