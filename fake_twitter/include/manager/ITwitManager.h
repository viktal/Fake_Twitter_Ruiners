#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
namespace manager {

class ITwit;

class ITwitManager : IManager {
public:
    virtual ~ITwitManager() = 0;
    virtual ITwit create(const PKey& author, const std::string& body, const Date& date, const PKey* retwetedFrom) = 0;
    virtual ITwit* loadByKey(const PKey& key) = 0;
    virtual void update(const ITwit& twit) = 0;
    virtual void drop(const ITwit& twit) = 0;
};

} // manager
} // fake twitter




