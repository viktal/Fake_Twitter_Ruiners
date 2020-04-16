#pragma once

#include <vector>
#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter::manager {

class ITwitManager : public IManager {
public:
    virtual ~ITwitManager() = 0;
    virtual std::unique_ptr<model::Twit> create(
            PKey author,
            const std::string& body,
            PKey retwetedFrom
    ) = 0;
    virtual std::unique_ptr<model::Twit> load(PKey key) = 0;
    virtual void update(std::shared_ptr<model::Twit> twit) = 0;
    virtual void drop(std::shared_ptr<model::Twit> twit) = 0;
    virtual void bulkFilterByTwit(std::vector<PKey> keys) = 0;

    // Like
    virtual bool like(PKey user_id, PKey twitt_id) = 0;
    virtual bool unlike(PKey user_id, PKey twitt_id) = 0;
};

} // fake twitter::manager