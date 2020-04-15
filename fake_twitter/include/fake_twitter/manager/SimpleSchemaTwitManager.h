#pragma once

#include <memory>
#include "fake_twitter/manager/ITwitManager.h"

namespace fake_twitter::manager {

class SimpleSchemaTwitManager : public ITwitManager {
public:
    explicit SimpleSchemaTwitManager(std::shared_ptr<db::IDBEngine> engine);
    std::unique_ptr<model::ITwit> create(
            const PKey& author,
            const std::string& body,
            const Date& date,
            const PKey* retwetedFrom
    ) override;
    std::unique_ptr<model::ITwit> load(const PKey& key) override;
    void update(std::shared_ptr<model::ITwit> twit) override;

    void drop(std::shared_ptr<model::ITwit> twit) override ;
    void bulkFilterByTwit(std::vector<PKey> keys) override ;

    std::shared_ptr<db::IDBEngine> bdEngine() override;
    void bdEngine(std::shared_ptr<db::IDBEngine> engine) override;

private:
    std::shared_ptr<db::IDBEngine> engine_;
};

} // fake_twitter::manager
