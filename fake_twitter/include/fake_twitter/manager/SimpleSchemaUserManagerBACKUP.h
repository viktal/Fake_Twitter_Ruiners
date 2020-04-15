//#pragma once
//
//#include <memory>
//#include "fake_twitter/model/IUser.h"
//#include "fake_twitter/manager/IUserManager.h"
//#include "fake_twitter/db/IDBEngine.h"
//
//namespace fake_twitter::manager {
//
////    virtual std::unique_ptr<model::IUser> create (const std::string& name, const std::string& login, const PasswordHash& passwordHash) = 0;
////    virtual std::unique_ptr<model::IUser> loadByKey(PKey key) = 0;
////    virtual std::unique_ptr<model::IUser> login (const std::string& login, const PasswordHash& passwordHash) = 0;
////    virtual void update(const IUser& user) = 0;
////    virtual void deleteUser(const IUser& user) = 0;
////    virtual std::string& reName (const std::string& name) = 0;
////    virtual PasswordHash& rePassword (const PasswordHash& passwordHash) = 0;
////    virtual Avatar& reAvatar (const Avatar& avatar) = 0;
//
//
//class SimpleSchemaUserManagerBACKUP : public IUserManager {
//public:
//    explicit SimpleSchemaUserManagerBACKUP(std::shared_ptr<db::IDBEngine> engine);
//
//    std::unique_ptr<model::IUser> create (const std::string& name, const std::string& login, const PasswordHash& passwordHash) override ;
//    std::unique_ptr<model::IUser> loadByKey(const PKey& key) override ;
//    std::unique_ptr<model::IUser> login (const std::string& login, const PasswordHash& passwordHash) override ;
//    void update(const IUser& user) override ;
//    void deleteUser(const IUser& user) override ;
//    void reName (const std::string& name) override ;
//    void rePassword (const PasswordHash& passwordHash) override ;
//    void reAvatar (const Avatar& avatar) override ;
//
//    std::shared_ptr<db::IDBEngine> bdEngine() override;
//    void bdEngine(std::shared_ptr<db::IDBEngine> engine) override;
//private:
//    std::shared_ptr<db::IDBEngine> engine;
//};
//
//} // fake_twitter::manager
