#pragma once

#include <cstddef>

namespace ccsp_lib::literals
{

// https://stackoverflow.com/a/22346651
constexpr std::size_t operator"" _sz(unsigned long long value) noexcept
{
    return static_cast<std::size_t>(value);
}

} // namespace ccsp_lib::literals
