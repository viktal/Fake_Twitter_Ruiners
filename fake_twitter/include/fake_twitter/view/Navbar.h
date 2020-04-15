#pragma once

#include "fake_twitter/view/IView.h"
#include "fake_twitter/model/IUser.h"

namespace fake_twitter::view {

class Navbar: public IView {
public:
    ~Navbar() = default;
    Navbar(const IUser&);
    HTML html() override;
};

} // fake_twitter::view
