#pragma once

#include "fake_twitter/view/IView.h"
#include "fake_twitter/model/IUser.h"

namespace fake_twitter::view {

class Navbar: public IView {
public:
    Navbar(std::shared_ptr<const model::IUser>&);
    ~Navbar() = default;
    HTML render() override;

private:
    std::shared_ptr<const model::IUser> user_;
};


} // fake_twitter::view
