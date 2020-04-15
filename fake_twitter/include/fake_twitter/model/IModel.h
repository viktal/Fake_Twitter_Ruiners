#pragma once

#include <chrono>
#include "fake_twitter/common.h"

namespace fake_twitter::model {

class IModel {
public:
    virtual ~IModel() = 0;
    virtual PKey id() = 0;
};

} // fake_twitter::model
