#pragma once

#include "../common.h"


namespace fake_twitter::model {
    // Useless?
    struct Tag {
        std::string title_;
    };

    struct Comment {
        PKey id_;
        PKey author_;
        std::string body_;
        PKey twit_id;
        Date date_;
    };

    struct Twit {
        PKey id_;
        PKey author_;
        std::string body_;
        size_t retwitCount_;
        PKey retwitedFrom_;
        Date date_;
        static const size_t max_body_len = 280; // Useless?
    };

    struct User {
        PKey id_;
        std::string name_;
        std::string login_;
        PasswordHash passwordHash_;
        Avatar avatar_;
        Date lastDate_; // last activity
        size_t countFollow_;    // May be Useless
        size_t countFollower_;  // May be Useless
    };
} // model; fake twitter
