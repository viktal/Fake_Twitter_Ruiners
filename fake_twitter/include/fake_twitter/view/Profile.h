#pragma once

#include <memory>
#include "fake_twitter/view/IView.h"
#include "fake_twitter/model/IUser.h"

namespace fake_twitter {
namespace view {

class Profile : public IView {
public:
    Profile(std::shared_ptr<const model::IUser>&);
    ~Profile() override = default;
    HTML render() override;

private:
    std::shared_ptr<const model::IUser> user_;
};

} //view
} //fake_twitter
