#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
namespace manager {

class IComment;

class ICommentManager : IManager {
public:
    virtual ~ICommentManager() = 0;
    virtual IComment create(const PKey& author, const std::string& body, const Date& date, const PKey* Original) = 0;
    virtual IComment* loadByKey(const PKey& key) = 0;
    virtual void update(const IComment& comment) = 0;
    virtual void drop(const IComment& comment) = 0;
};

} // manager
} // fake twitter

