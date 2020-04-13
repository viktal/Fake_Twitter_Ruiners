#pragma once

#include <cstdio>
#include <string>
#include <memory>

#include "IUser.h"
#include "ITwitt.h"

namespace fake_twitter {
namespace model {

class ICommentManager;

class ITwit : public IModel {
    virtual const std::shared_ptr<ITwitManager> manager() = 0;

    virtual const PKey& author() = 0;
    virtual void author(PKey) = 0;

    virtual const ITwitt* Original() = 0;
    virtual void Original(ITwitt*) = 0;

    virtual const std::string& body() = 0;
    virtual void body(std::string) = 0;

    virtual const Date& date() = 0;
    virtual void date(Date) = 0;

};

} // model
} // fake twitter
