#pragma once

#include "map"

namespace fake_twitter::db {

class Field {
public:
    Field() = default;
    Field(std::string&& rawresult);

    template<typename T>
    T as();
private:
    std::string str;
};

} // fake_twitter::db
