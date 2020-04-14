#pragma once

#include <string>
#include <chrono>

namespace fake_twitter {

using PasswordHash = int;
using Avatar = std::string;
using PKey = int;
using Date = std::chrono::time_point<std::chrono::system_clock>;

} //fake_twitter
