#include "fake_twitter/manager/SimpleSchemaTwitManager.h"

using namespace fake_twitter;
using namespace fake_twitter::manager;


SimpleSchemaTwitManager::SimpleSchemaTwitManager(std::shared_ptr<db::IDBEngine> engine) {
    this->engine_ = std::move(engine);
}

std::unique_ptr<model::ITwit> SimpleSchemaTwitManager::load(const PKey &key) {
    return std::unique_ptr<model::ITwit>();
}

void SimpleSchemaTwitManager::update(std::shared_ptr<model::ITwit> twit) {

}

void SimpleSchemaTwitManager::drop(std::shared_ptr<model::ITwit> twit) {

}

void SimpleSchemaTwitManager::bulkFilterByTwit(std::vector<PKey> keys) {

}

std::shared_ptr<db::IDBEngine> SimpleSchemaTwitManager::bdEngine() {
    return std::shared_ptr<db::IDBEngine>();
}

void SimpleSchemaTwitManager::bdEngine(std::shared_ptr<db::IDBEngine> engine) {

}

//std::unique_ptr<model::ITwit>
//SimpleSchemaTwitManager::create(const PKey &author, const std::string &body, const Date &date, PKey *retwetedFrom) {
//    return std::unique_ptr<model::ITwit>();
//}

//std::unique_ptr<model::ITwit>
//SimpleSchemaTwitManager::create(const PKey &author, const std::string &body, const Date &date, PKey *retwetedFrom) {
//    return std::unique_ptr<model::ITwit>();
//}
