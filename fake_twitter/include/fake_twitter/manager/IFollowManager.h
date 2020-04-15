#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
namespace manager {

class IFollowManager: IManager {
    virtual ~IFollowManager() = 0;
    virtual void Follow(const PKey user, const PKey user) = 0;
    virtual void unFollow(const PKey user, const PKey user) = 0;
};
