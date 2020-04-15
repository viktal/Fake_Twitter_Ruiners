#pragma once

#include "map"

namespace fake_twitter::db {

class Field final {
public:
    Field(std::string&& rawresult);

    template<typename T>
    T as();
private:
    std::string str;
};

} // fake_twitter::db
