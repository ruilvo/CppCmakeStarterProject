#include "ccsp_lib/numbers.hpp"

namespace ccsp_lib::numbers
{

CCSP_LIB_API bool isPowerOfTwo(std::size_t value)
{
    return (value > 0 && ((value & (value - 1)) == 0));
}

} // namespace ccsp_lib::numbers
