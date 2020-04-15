#pragma once

#include "fake_twitter/common.h"

namespace fake_twitter::view {

class IView {
public:
    virtual ~IView() = 0;
    virtual HTML render() = 0;
};

} //fake_twitter::view
