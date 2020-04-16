#include "fake_twitter/manager/UserManager.h"

using namespace fake_twitter;
using namespace fake_twitter::manager;

UserManager::UserManager(std::shared_ptr<db::IDBEngine> engine) {

}

std::unique_ptr<model::User>
UserManager::create(const std::string &name, const std::string &login, const PasswordHash &passwordHash) {
    return std::unique_ptr<model::User>();
}

std::unique_ptr<model::User> UserManager::loadByKey(const PKey &key) {
    return std::unique_ptr<model::User>();
}

std::unique_ptr<model::User>
UserManager::login(const std::string &login, const std::string& password) {
    return std::unique_ptr<model::User>();
}

void UserManager::update(const model::User &user) {

}

void UserManager::deleteUser(const model::User &user) {

}

void UserManager::reName(const std::string &name) {

}

void UserManager::rePassword(const PasswordHash &passwordHash) {

}

void UserManager::reAvatar(const Avatar &avatar) {

}

std::shared_ptr<db::IDBEngine> UserManager::bdEngine() {
    return std::shared_ptr<db::IDBEngine>();
}

void UserManager::bdEngine(std::shared_ptr<db::IDBEngine> engine) {

}

void Follow(PKey user, PKey user) { }

void unFollow(PKey user, PKey user) {  }
