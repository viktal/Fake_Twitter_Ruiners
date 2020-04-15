#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
    namespace manager {

        class ITag;

        class ITagManager : IManager {
        public:
            virtual ~ITagManager() = 0;
            virtual ITag create(const std::string& title) = 0;
            virtual ITwit* SearchTag(const std::string& title) = 0;
        };

    } // manager
} // fake twitter
