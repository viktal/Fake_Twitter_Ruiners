#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
    namespace manager {

        class ITagManager : IManager {
        public:
            virtual ~ITagManager() = 0;
            Tag create(const std::string& title) = 0;
            virtual Twit* SearchTag(const std::string& title) = 0;
            // virtual Twit* SearchTag(const std::string& title, size_t count) = 0;
        };

    } // manager
} // fake twitter
