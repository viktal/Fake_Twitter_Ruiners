#pragma once

#include <memory>
#include "fake_twitter/view/IView.h"
#include "fake_twitter/model/IUser.h"

namespace fake_twitter {
namespace view {

class Body : public IView {
public:
    Body(std::shared_ptr<const model::IUser>&);
    ~Body() override = default;
    HTML render() override;

private:
    std::shared_ptr<const model::IUser> user_;
};

} //view
} //fake_twitter
