#pragma once

#include <utility>

#include "../common.h"
#include "IComment.h"


namespace fake_twitter {
    namespace model {

        class BasicComment : public IComment {
        public:
            BasicComment (PKey id, PKey author, std::string body, Date date, PKey Original);

            ~BasicComment() override = default;

            const std::shared_ptr<ICommentManager> manager() override;

            const PKey& author() override;
            void author(PKey) override;

            const PKey* Original() override;
            void Original(PKey) override;

            const std::string& body() override;
            void body(std::string) override;

            const Date& date() override;
            void date(Date) override;

            PKey id() override;

        private:
            PKey id_;
            PKey author_;
            std::string body_;
            PKey Origin_;
            Date date_;
        };

    } // model
} // fake twitter
