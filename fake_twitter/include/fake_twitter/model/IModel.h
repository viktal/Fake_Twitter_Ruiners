#pragma once

#include <chrono>

namespace fake_twitter {
namespace model {


class IModel {
public:
    virtual ~IModel() = 0;
    virtual PKey id() = 0;
    virtual void clean() = 0;
};

} // model
} // fake_twitter
