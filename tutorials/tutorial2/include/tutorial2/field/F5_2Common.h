// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref tutorial2::field::F5_2 field.

#pragma once

#include <limits>

namespace tutorial2
{

namespace field
{

/// @brief Common types and functions for
///     @ref tutorial2::field::F5_2 field.
struct F5_2Common
{
    /// @brief Re-definition of the value type used by
    ///     tutorial2::field::F5_2 field.
    using ValueType = double;

    /// @brief Name of the @ref tutorial2::field::F5_2 field.
    static const char* name()
    {
        return "F5_2";
    }
    
    /// @brief Special value <b>"S3"</b>.
    static constexpr ValueType valueS3()
    {
        return -std::numeric_limits<ValueType>::infinity();
    }
    
    
    /// @brief Special value <b>"S4"</b>.
    static constexpr ValueType valueS4()
    {
        return static_cast<ValueType>(5.123000);
    }
    
    
    /// @brief Special value <b>"S2"</b>.
    static constexpr ValueType valueS2()
    {
        return std::numeric_limits<ValueType>::infinity();
    }
    
    
    /// @brief Special value <b>"S1"</b>.
    static constexpr ValueType valueS1()
    {
        return std::numeric_limits<ValueType>::quiet_NaN();
    }
    
    
    
};

} // namespace field

} // namespace tutorial2


