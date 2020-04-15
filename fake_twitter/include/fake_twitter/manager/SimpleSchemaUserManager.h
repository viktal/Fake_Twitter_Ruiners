#pragma once

#include <memory>
#include "fake_twitter/manager/ITwitManager.h"

namespace fake_twitter::manager {

class SimpleSchemaUserManager : public IUserManager {
public:
    explicit SimpleSchemaUserManager(std::shared_ptr<db::IDBEngine> engine);
    std::unique_ptr<model::ITwit> create(
            const std::string& name,
            const std::string& login,
            const PasswordHash& passwordHash
    ) override;

    std::unique_ptr<model::IUser> loadByKey(const PKey& key) override;
    void update(std::unique_ptr<model::IUser> user) override;

    void deleteUser(std::unique_ptr<model::IUser> user) override ;
    std::string& reName (const std::string& name) override;
    PasswordHash& rePassword (const PasswordHash& passwordHash) override;
    Avatar& reAvatar (const Avatar& avatar) override; 
    std::shared_ptr<db::IDBEngine> bdEngine() override;
    void bdEngine(std::shared_ptr<db::IDBEngine> engine) override;

private:
    std::shared_ptr<db::IDBEngine> engine_;
};

} // fake_twitter::manager
