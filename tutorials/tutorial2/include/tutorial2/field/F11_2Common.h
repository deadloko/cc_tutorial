// Generated by commsdsl2comms v3.4.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref tutorial2::field::F11_2 field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace tutorial2
{

namespace field
{

/// @brief Common types and functions for
///     @ref tutorial2::field::F11_2 field.
struct F11_2Common
{
    /// @brief Values enumerator for
    ///     @ref tutorial2::field::F11_2 field.
    enum class ValueType : std::uint8_t
    {
        V0 = 0, ///< value @b V0.
        V1 = 1, ///< value @b V1.
        V2 = 2, ///< value @b V2.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref tutorial2::field::F11_2 field.
    static const char* name()
    {
        return "Field 11_2";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "V0",
            "V1",
            "V2"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref tutorial2::field::F11_2 field.
using F11_2Val = F11_2Common::ValueType;

} // namespace field

} // namespace tutorial2


