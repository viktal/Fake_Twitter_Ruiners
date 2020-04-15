#pragma once

#include <memory>
#include "fake_twitter/manager/ITwitManager.h"
#include "fake_twitter/manager/IUserManager.h"
#include "fake_twitter/controller/IController.h"

namespace fake_twitter::controller {

class NewsFeed : public IController {
public:
    NewsFeed(std::shared_ptr<manager::ITwitManager>, std::shared_ptr<manager::IUserManager>);
    ~NewsFeed() override = default;
    HTML process(const PKey& user);
private:
    std::shared_ptr<manager::ITwitManager> twitManager;
    std::shared_ptr<manager::IUserManager> userManager;
};

} // fake_twitter::controller
