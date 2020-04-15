//#include "fake_twitter/manager/SimpleSchemaUserManagerBACKUP.h"
//
//#include <utility>
//
//using namespace fake_twitter;
//using namespace fake_twitter::manager;
//
//
//SimpleSchemaUserManagerBACKUP::SimpleSchemaUserManagerBACKUP(std::shared_ptr<db::IDBEngine> engine) {
//    this->engine = std::move(engine);
//}
//
//std::unique_ptr<model::IUser>
//SimpleSchemaUserManagerBACKUP::create(const std::string &name, const std::string &login, const PasswordHash &passwordHash) {
//    return std::unique_ptr<model::IUser>();
//}
//
//std::unique_ptr<model::IUser> SimpleSchemaUserManagerBACKUP::loadByKey(const PKey &key) {
//    return std::unique_ptr<model::IUser>();
//}
//
//std::unique_ptr<model::IUser>
//SimpleSchemaUserManagerBACKUP::login(const std::string &login, const PasswordHash &passwordHash) {
//    return std::unique_ptr<model::IUser>();
//}
//
//void SimpleSchemaUserManagerBACKUP::update(const IUser &user) {
//
//}
//
//void SimpleSchemaUserManagerBACKUP::deleteUser(const IUser &user) {
//
//}
//
//void SimpleSchemaUserManagerBACKUP::reName(const std::string &name) {
////    return <#initializer#>;
//}
//
//void SimpleSchemaUserManagerBACKUP::rePassword(const PasswordHash &passwordHash) {
////    return <#initializer#>;
//}
//
//void SimpleSchemaUserManagerBACKUP::reAvatar(const Avatar &avatar) {
////    return "";
//}
//
//std::shared_ptr<db::IDBEngine> SimpleSchemaUserManagerBACKUP::bdEngine() {
//    return std::shared_ptr<db::IDBEngine>();
//}
//
//void SimpleSchemaUserManagerBACKUP::bdEngine(std::shared_ptr<db::IDBEngine> engine) {
//
//}
//
//
