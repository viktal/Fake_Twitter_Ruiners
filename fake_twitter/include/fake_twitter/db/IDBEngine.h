#pragma once

#include <functional>
#include <map>
#include "fake_twitter/db/Field.h"

namespace fake_twitter::db {

class IDBEngine {
public:
    virtual void select(const std::string& sql, std::function<void(std::map<std::string, Field>)> handler) = 0;
    virtual void update(const std::string& sql) = 0;
    virtual void insert(const std::string& sql) = 0;
    virtual void del(const std::string& sql) = 0;
};

} // fake_twitter::db
