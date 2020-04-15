#include "fake_twitter/controller/NewsFeed.h"

#include <utility>
#include <fake_twitter/view/MainPageBuilder.h>

using namespace fake_twitter::controller;

NewsFeed::NewsFeed(std::shared_ptr<manager::ITwitManager> tmngr, std::shared_ptr<manager::IUserManager> umngr) {
    twitManager = std::move(tmngr);
    userManager = std::move(umngr);
}

fake_twitter::HTML NewsFeed::process(const PKey& userId) {
    auto user = userManager->loadByKey(userId);
//    auto followers = userManager->(user->id());
    return view::MainPageBuilder().navbar("")
                                  .leftMenu("")
                                  .rightMenu("")
                                  .body("")
                                  .render();
}
