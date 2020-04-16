#include "fake_twitter/model/BasicTwit.h"
#include "fake_twitter/manager/TwitManager.h"

#include <memory>

using namespace fake_twitter;
using namespace fake_twitter::manager;


TwitManager::TwitManager(std::shared_ptr<db::IDBEngine> engine) {
    this->engine_ = std::move(engine);
}

std::unique_ptr<model::Twit> TwitManager::load(PKey key) {
    std::unique_ptr<model::Twit> twit = nullptr;
    engine_->select("MY SUPER SQL!", [&] (std::map<std::string, db::Field> fields) {
        if (twit != nullptr)
            throw "ERROR";
        twit = std::make_unique<model::BasicTwit>(fields["id"].as<int>(), fields["author"].as<int>(),
                "empty body", Date(), 123, 1);
    });
    return twit;
}

void TwitManager::update(std::shared_ptr<model::Twit> twit) {

}

void TwitManager::drop(std::shared_ptr<model::Twit> twit) {

}

void TwitManager::bulkFilterByTwit(std::vector<PKey> keys) {

}

std::shared_ptr<db::IDBEngine> TwitManager::bdEngine() {
    return std::shared_ptr<db::IDBEngine>();
}

void TwitManager::bdEngine(std::shared_ptr<db::IDBEngine> engine) {

}

bool like(PKey user_id, PKey twitt_id) {}
bool unlike(PKey user_id, PKey twitt_id){}

//std::unique_ptr<model::ITwit>
//TwitManager::create(const PKey &author, const std::string &body, const Date &date, PKey *retwetedFrom) {
//    return std::unique_ptr<model::ITwit>();
//}

//std::unique_ptr<model::ITwit>
//TwitManager::create(const PKey &author, const std::string &body, const Date &date, PKey *retwetedFrom) {
//    return std::unique_ptr<model::ITwit>();
//}
