#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/model/Structs.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
namespace manager {


class IUserManager: public IManager {
public:
    virtual ~IUserManager() = 0;
    virtual std::unique_ptr<model::User> create (const std::string& name, const std::string& login, const PasswordHash& passwordHash) = 0;
    virtual std::unique_ptr<model::User> loadByKey(PKey key) = 0;
    virtual std::unique_ptr<model::User> login (const std::string& login, const std::string& password) = 0;
    virtual void update(const model::User& user) = 0;
    virtual void deleteUser(const model::User& user) = 0;
    // virtual void deleteUser(PKey user_id) = 0;
    virtual void reName (const std::string& name) = 0;
    virtual void rePassword (const PasswordHash& passwordHash) = 0;
    virtual void reAvatar (const Avatar& avatar) = 0;

    // Follow
    virtual void Follow(const PKey user, const PKey user) = 0;
    virtual void unFollow(const PKey user, const PKey user) = 0;
};

} // manager
} // fake_twitter
