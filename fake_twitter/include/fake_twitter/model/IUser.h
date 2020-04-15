#pragma once

#include <chrono>

#include "fake_twitter/model/IModel.h"
#include "fake_twitter/common.h"

namespace fake_twitter::model {

class IUser: public IModel {
public:
    virtual ~IUser() = 0;
    virtual const bool& is_authorized() = 0;
    virtual void is_authorized(bool) = 0;

    virtual const std::string& name() = 0;
    virtual void name(std::string) = 0;

    virtual const std::string& login() = 0;
    virtual void login(std::string) = 0;

    virtual const PasswordHash& passwordHash() = 0;
    virtual void passwordHash(PasswordHash) = 0;

    virtual const Avatar& avatar() = 0;
    virtual void avatar(Avatar) = 0;
};

} // fake_twitter::model
