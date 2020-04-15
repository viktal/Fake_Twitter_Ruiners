#pragma once

#include <memory>
#include "fake_twitter/manager/IUserManager.h"

namespace fake_twitter::manager {

class SimpleSchemaUserManager : public IUserManager {
public:
    explicit SimpleSchemaUserManager(std::shared_ptr<db::IDBEngine> engine);
    std::unique_ptr<model::IUser> create (const std::string& name, const std::string& login, const PasswordHash& passwordHash) override;
    std::unique_ptr<model::IUser> loadByKey(const PKey& key) override;
    std::unique_ptr<model::IUser> login (const std::string& login, const PasswordHash& passwordHash) override;
    void update(const model::IUser& user) override;
    void deleteUser(const model::IUser& user) override;
    void reName (const std::string& name) override;
    void rePassword (const PasswordHash& passwordHash) override;
    void reAvatar (const Avatar& avatar) override;
    std::shared_ptr<db::IDBEngine> bdEngine() override;
    void bdEngine(std::shared_ptr<db::IDBEngine> engine) override;
private:
    std::shared_ptr<db::IDBEngine> engine_;
};

} // fake_twitter::manager
