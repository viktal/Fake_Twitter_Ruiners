#pragma once

#include <memory>
#include "fake_twitter/manager/ITwitManager.h"

namespace fake_twitter::manager {

class TwitManager : public ITwitManager {
public:
    explicit TwitManager(std::shared_ptr<db::IDBEngine> engine);
    std::unique_ptr<model::Twit> create(
            PKey author,
            const std::string& body,
            PKey retwetedFrom
    ) override {return nullptr;};
    std::unique_ptr<model::Twit> load(PKey key) override;
    void update(std::shared_ptr<model::Twit> twit) override;

    void drop(std::shared_ptr<model::Twit> twit) override ;
    void bulkFilterByTwit(std::vector<PKey> keys) override ;

    std::shared_ptr<db::IDBEngine> bdEngine() override;
    void bdEngine(std::shared_ptr<db::IDBEngine> engine) override;

    // Like
    bool like(PKey user_id, PKey twitt_id) override;
    bool unlike(PKey user_id, PKey twitt_id) override;

private:
    std::shared_ptr<db::IDBEngine> engine_;
};

} // fake_twitter::manager
