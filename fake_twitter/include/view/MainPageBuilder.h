#pragma once

#include "fake_twitter/view/IView.h"

namespace fake_twitter::view {

class MainPageBuilder: public IView {
public:
    MainPageBuilder() = default;
    MainPageBuilder& navbar(HTML);
    MainPageBuilder& leftMenu(HTML);
    MainPageBuilder& rightMenu(HTML);
    MainPageBuilder& body(HTML);
    HTML render() override;
private:
    HTML template_ = "";
};

} // fake_twitter::view
