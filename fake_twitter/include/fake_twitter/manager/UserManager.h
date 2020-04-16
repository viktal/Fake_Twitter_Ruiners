#pragma once

#include <memory>
#include "fake_twitter/manager/IUserManager.h"

namespace fake_twitter::manager {

class UserManager : public IUserManager {
public:
    explicit UserManager(std::shared_ptr<db::IDBEngine> engine);
    std::unique_ptr<model::User> create (const std::string& name, const std::string& login, const PasswordHash& passwordHash) override;
    std::unique_ptr<model::User> loadByKey(PKey key) override;
    std::unique_ptr<model::User> login (const std::string& login, const std::string& password) override;
    void update(const model::User& user) override;
    void deleteUser(const model::User& user) override;
    void reName (const std::string& name) override;
    void rePassword (const PasswordHash& passwordHash) override;
    void reAvatar (const Avatar& avatar) override;
    std::shared_ptr<db::IDBEngine> bdEngine() override;
    void bdEngine(std::shared_ptr<db::IDBEngine> engine) override;

    // Follow
    virtual void Follow(PKey user, PKey user) override;
    virtual void unFollow(PKey user, PKey user) override;
private:
    std::shared_ptr<db::IDBEngine> engine_;
};

} // fake_twitter::manager
