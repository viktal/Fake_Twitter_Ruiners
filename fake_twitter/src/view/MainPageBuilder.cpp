#include "fake_twitter/view/MainPageBuilder.h"

using namespace fake_twitter::view;

MainPageBuilder &MainPageBuilder::navbar(fake_twitter::HTML html) {
    template_ += html;
    return *this;
}

MainPageBuilder &MainPageBuilder::leftMenu(fake_twitter::HTML html) {
    template_ += html;
    return *this;
}

MainPageBuilder &MainPageBuilder::rightMenu(fake_twitter::HTML html) {
    template_ += html;
    return *this;
}

MainPageBuilder &MainPageBuilder::body(fake_twitter::HTML html) {
    template_ += html;
    return *this;
}

fake_twitter::HTML MainPageBuilder::render() {
    return template_;
}
