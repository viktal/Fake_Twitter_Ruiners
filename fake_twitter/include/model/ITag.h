#pragma once

#include <cstdio>
#include <string>
#include <memory>

#include "IModel.h"

namespace fake_twitter {
    namespace model {

        class ITagManager;

        class ITag  {
        public:
            virtual ~ITag() = 0;
            virtual const std::shared_ptr<ITagManager> manager() = 0;

            virtual const std::string& title() = 0;
            virtual void title(std::string) = 0;

        };

    } // model
} // fake twitter
