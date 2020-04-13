#pragma once

#include <cstdio>
#include <string>
#include <memory>

#include "IUser.h"

namespace fake_twitter {
namespace model {

class ITwitManager;

class ITwit : public IModel {
    virtual const std::shared_ptr<ITwitManager> manager() = 0;

    virtual const PKey& author() = 0;
    virtual void author(PKey) = 0;

    virtual const size_t& retwitCount() = 0;
    virtual void retwitCount(size_t) = 0;

    virtual const PKey* retwitedFrom() = 0;
    virtual void retvitedFrom(PKey) = 0;

    virtual const std::string& body() = 0;
    virtual void body(std::string) = 0;

    virtual const Date& date() = 0;
    virtual void date(Date) = 0;

};

} // model
} // fake twitter
