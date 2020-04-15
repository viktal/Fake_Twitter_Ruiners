#pragma once

#include <vector>
#include "fake_twitter/model/IUser.h"
#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter::manager {

class IUserManager: public IManager {
public:
    virtual ~IUserManager() = 0;
    virtual std::unique_ptr<model::IUser> create(const std::string& name,
                                          const std::string& login,
                                          const PasswordHash& passwordHash) = 0;
    virtual std::unique_ptr<model::IUser> load(const PKey& key) = 0;
    virtual std::vector<std::unique_ptr<model::IUser>> followers(const PKey& key) = 0;
    virtual std::unique_ptr<model::IUser> login(const std::string& login, const PasswordHash& passwordHash) = 0;
    virtual void update(std::shared_ptr<model::IUser> user) = 0;
};

} // fake_twitter::manager
