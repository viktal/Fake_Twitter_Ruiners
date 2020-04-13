#pragma once

#include <chrono>
#include "fake_twitter/common.h"

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
