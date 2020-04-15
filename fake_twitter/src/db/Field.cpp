#include "fake_twitter/db/Field.h"

using namespace fake_twitter::db;

Field::Field(std::string&& rawresult) {
    str = rawresult;
}

template<>
std::string Field::as<std::string>() {
    return str;
}

template<>
int Field::as<int>() {
    return stoi(str);
}
