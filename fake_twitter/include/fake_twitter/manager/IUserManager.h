#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/model/IUser.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
namespace manager {


class IUserManager: public IManager {
public:
    virtual ~IUserManager() = 0;
    virtual std::unique_ptr<model::IUser> create (const std::string& name, const std::string& login, const PasswordHash& passwordHash) = 0;
    virtual std::unique_ptr<model::IUser> loadByKey(const PKey& key) = 0;
    virtual std::unique_ptr<model::IUser> login (const std::string& login, const PasswordHash& passwordHash) = 0;
    virtual void update(const model::IUser& user) = 0;
    virtual void deleteUser(const model::IUser& user) = 0;
    virtual void reName (const std::string& name) = 0;
    virtual void rePassword (const PasswordHash& passwordHash) = 0;
    virtual void reAvatar (const Avatar& avatar) = 0;
};

} // manager
} // fake_twitter
