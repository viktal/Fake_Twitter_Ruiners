#pragma once

#include <memory>
#include "fake_twitter/view/IView.h"
#include "fake_twitter/model/IUser.h"

namespace fake_twitter {
namespace view {

class RightMenu : public IView {
public:
    RightMenu(std::shared_ptr<const model::IUser>&);
    ~RightMenu() override = default;
    HTML render() override;

private:
    std::shared_ptr<const model::IUser> user_;
};

} //view
} //fake_twitter