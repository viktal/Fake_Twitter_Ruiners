#pragma once

#include "fake_twitter/manager/ILikeManager.h"

namespace fake_twitter::manager {

    class LikeManager : public ILikeManager {
    public:
        bool like(const PKey &user_id, const PKey &twitt_id) override;
        bool unlike(const PKey &user_id, const PKey &twitt_id) override;
    };

} // fake_twitter::manager
