#pragma once

#include "fake_twitter/manager/IManager.h

namespace fake_twitter {
namespace manager {

class IUser;

class IUserManager: IManager {
    virtual ~IUserManager() = 0;
    virtual void save(const IUser& user) = 0;
    virtual void load(IUser& user) = 0;
    virtual void update(const IUser& user) = 0;
};

} // manager
} // fake_twitter
