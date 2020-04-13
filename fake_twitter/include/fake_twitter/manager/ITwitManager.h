#pragma once

#include "fake_twitter/manager/IManager.h"

namespace fake_twitter {
namespace manager {

class ITwit;

class ITwitManager : IManager {
public:
    virtual ~ITwitManager() = 0;
    virtual void save(const ITwit& twit) = 0;
    virtual void load(ITwit& twit) = 0;
    virtual void update(const ITwit& twit) = 0;
    virtual void deleteTwit(ITwit twit) = 0;
    virtual void retwit(ITwit twit) = 0;
    virtual void deleteRetwit(ITwit twit) = 0;
};

} // manager
} // fake twitter




