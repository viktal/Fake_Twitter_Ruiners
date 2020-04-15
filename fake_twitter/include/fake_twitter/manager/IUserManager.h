#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
namespace manager {

class IUser;

class IUserManager: IManager {
    virtual ~IUserManager() = 0;
    virtual IUser* create (const std::string& name, const std::string& login, const PasswordHash& passwordHash) = 0;
    virtual IUser* loadByKey(PKey key) = 0;
    virtual IUser* login (const std::string& login, const PasswordHash& passwordHash) = 0;
    virtual void update(const IUser* user) = 0;
    virtual void deleteUser(const IUser* user) = 0;
    virtual std::string& reName (const std::string& name) = 0;
    virtual PasswordHash& rePassword (const PasswordHash& passwordHash) = 0
    virtual Avatar& reAvatar (const Avatar& avatar) = 0;
};

} // manager
} // fake_twitter
