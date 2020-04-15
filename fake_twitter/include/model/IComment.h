#pragma once

#include <cstdio>
#include <string>
#include <memory>

#include "IModel.h"

namespace fake_twitter {
namespace model {

class ICommentManager;

class IComment : public IModel {
public:
    virtual ~IComment() = 0;
    virtual const std::shared_ptr<ICommentManager> manager() = 0;

    virtual const PKey& author() = 0;
    virtual void author(PKey) = 0;

    virtual const PKey* Original() = 0;
    virtual void Original(PKey) = 0;

    virtual const std::string& body() = 0;
    virtual void body(std::string) = 0;

    virtual const Date& date() = 0;
    virtual void date(Date) = 0;

};

} // model
} // fake twitter
