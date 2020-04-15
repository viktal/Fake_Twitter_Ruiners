#include "fake_twitter/manager/SimpleSchemaUserManager.h"

using namespace fake_twitter;
using namespace fake_twitter::manager;

SimpleSchemaUserManager::SimpleSchemaUserManager(std::shared_ptr<db::IDBEngine> engine) {

}

std::unique_ptr<model::IUser>
SimpleSchemaUserManager::create(const std::string &name, const std::string &login, const PasswordHash &passwordHash) {
    return std::unique_ptr<model::IUser>();
}

std::unique_ptr<model::IUser> SimpleSchemaUserManager::loadByKey(const PKey &key) {
    return std::unique_ptr<model::IUser>();
}

std::unique_ptr<model::IUser>
SimpleSchemaUserManager::login(const std::string &login, const PasswordHash &passwordHash) {
    return std::unique_ptr<model::IUser>();
}

void SimpleSchemaUserManager::update(const model::IUser &user) {

}

void SimpleSchemaUserManager::deleteUser(const model::IUser &user) {

}

void SimpleSchemaUserManager::reName(const std::string &name) {

}

void SimpleSchemaUserManager::rePassword(const PasswordHash &passwordHash) {

}

void SimpleSchemaUserManager::reAvatar(const Avatar &avatar) {

}

std::shared_ptr<db::IDBEngine> SimpleSchemaUserManager::bdEngine() {
    return std::shared_ptr<db::IDBEngine>();
}

void SimpleSchemaUserManager::bdEngine(std::shared_ptr<db::IDBEngine> engine) {

}
