#pragma once

#include "fake_twitter/manager/IManager.h"
#include "fake_twitter/common.h"

namespace fake_twitter {
namespace manager {

class ICommentManager : IManager {
public:
    virtual ~ICommentManager() = 0;
    virtual  std::unique_ptr<model::Comment> create(PKey author, const std::string& body, const Date& date, PKey Original) = 0;
    virtual std::unique_ptr<model::Comment> loadByKey(PKey key) = 0;
    virtual void update(const model::Comment& comment) = 0;
    virtual void drop(const model::Comment& comment) = 0;
};

} // manager
} // fake twitter

