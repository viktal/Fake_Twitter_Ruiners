#pragma once

#include <memory>
#include "fake_twitter/db/IDBEngine.h"

namespace fake_twitter::manager {

class IManager {
public:
    virtual ~IManager() = 0;
    virtual std::shared_ptr<db::IDBEngine> bdEngine() = 0;
    virtual void bdEngine(std::shared_ptr<db::IDBEngine> engine) = 0;
};

} // fake_twitter::manager
