#include "fake_twitter/model/BasicTwit.h"
#include "fake_twitter/manager/SimpleSchemaTwitManager.h"

#include <memory>

using namespace fake_twitter;
using namespace fake_twitter::manager;


SimpleSchemaTwitManager::SimpleSchemaTwitManager(std::shared_ptr<db::IDBEngine> engine) {
    this->engine_ = std::move(engine);
}

std::unique_ptr<model::ITwit> SimpleSchemaTwitManager::load(const PKey &key) {
    std::unique_ptr<model::ITwit> twit = nullptr;
    engine_->select("MY SUPER SQL!", [&] (std::map<std::string, db::Field> fields) {
        if (twit != nullptr)
            throw "ERROR";
        twit = std::make_unique<model::BasicTwit>(fields["id"].as<int>(), fields["author"].as<int>(),
                "empty body", Date(), 123, 1);
    });
    return twit;
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
