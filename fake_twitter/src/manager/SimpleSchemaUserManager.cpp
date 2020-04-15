#include "fake_twitter/manager/SimpleSchemaUserManager.h"

using namespace fake_twitter;
using namespace fake_twitter::manager;


SimpleSchemaUserManager::SimpleSchemaUserManager(std::shared_ptr<db::IDBEngine> engine) {
    this->engine_ = std::move(engine);
}

std::unique_ptr<model::IUser> SimpleSchemaUserManager::load(const PKey &key) {
    return std::unique_ptr<model::IUser>();
}

void SimpleSchemaUserManager::update(std::shared_ptr<model::IUser> User) {
}

void SimpleSchemaUserManager::deleteUser(std::shared_ptr<model::IUser> User) {

}


std::shared_ptr<db::IDBEngine> SimpleSchemaUserManager::bdEngine() {
    return std::shared_ptr<db::IDBEngine>();
}

void SimpleSchemaUserManager::bdEngine(std::shared_ptr<db::IDBEngine> engine) {

}