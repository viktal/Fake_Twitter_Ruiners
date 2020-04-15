#pragma once

#include <utility>

#include "../common.h"
#include "ITag.h"


namespace fake_twitter {
    namespace model {

        class Tag : public ITag {
        public:
            Tag(std::string title);
            ~Tag() override = default;
            const std::shared_ptr<ITagManager> manager() override;
            const std::string& title() override;
            void title(std::string) override;

        private:
            std::string title_;
        };

    } // model
} // fake twitter
