#pragma once

#include <vector>
#include "fake_twitter/model/ITwit.h"
#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter::manager {

class ITwitManager : public IManager {
public:
    virtual ~ITwitManager() = 0;
    virtual std::unique_ptr<model::ITwit> create(
            const PKey& author,
            const std::string& body,
            const Date& date,
            const PKey* retwetedFrom
    ) = 0;
    virtual std::unique_ptr<model::ITwit> load(const PKey& key) = 0;
    virtual void update(std::shared_ptr<model::ITwit> twit) = 0;
    virtual void drop(std::shared_ptr<model::ITwit> twit) = 0;
    virtual void bulkFilterByTwit(std::vector<PKey> keys) = 0;
};

} // fake twitter::manager