#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter::manager {

    class IUserManager: public IManager {
    public:
        virtual ~IUserManager() = 0;
        virtual bool like(const PKey& user_id, const PKey& twitt_id) = 0;
        virtual bool unlike(const PKey& user_id, const PKey& twitt_id) = 0;
    };

} // fake_twitter::manager
