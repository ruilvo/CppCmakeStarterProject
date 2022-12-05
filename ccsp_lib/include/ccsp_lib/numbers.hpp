#pragma once

#include "ccsp_lib/api.hpp"
#include "ccsp_lib/types.hpp"

namespace ccsp_lib::numbers
{

/**
 * @brief Check whether a number is a power of 2.
 *
 * @param value the number to check the value of.
 * @return bool true if the number is a power of 2, false otherwise. 0 returns false.
 */
CCSP_LIB_API bool isPowerOfTwo(std::size_t value);

/**
 * @brief Reverse the bit representation of a number, considering the
 * bit_width(maximum_value) as the number of bits.
 *
 * @param value value to reverse the bit representation of.
 * @param maximum_value value used to computed the bit-width to use.
 * @return std::size_t the reversed bit representation of the value.
 */
CCSP_LIB_API std::size_t reverseBits(std::size_t value, std::size_t maximum_value);

} // namespace ccsp_lib::numbers
