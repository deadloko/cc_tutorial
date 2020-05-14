// Generated by commsdsl2comms v3.4.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref tutorial2::field::E2_2 field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>

namespace tutorial2
{

namespace field
{

/// @brief Common types and functions for
///     @ref tutorial2::field::E2_2 field.
struct E2_2Common
{
    /// @brief Values enumerator for
    ///     @ref tutorial2::field::E2_2 field.
    enum class ValueType : std::uint16_t
    {
        V1 = 0, ///< value @b V1
        V2 = 100, ///< value @b V2
        V3 = 271, ///< value @b V3
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 271, ///< Last defined value.
        ValuesLimit = 272, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref tutorial2::field::E2_2 field.
    static const char* name()
    {
        return "E2_2";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        using NameInfo = std::pair<ValueType, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(ValueType::V1, "V1"),
            std::make_pair(ValueType::V2, "V2"),
            std::make_pair(ValueType::V3, "V3")
        };
        
        auto iter = std::lower_bound(
            std::begin(Map), std::end(Map), val,
            [](const NameInfo& info, ValueType v) -> bool
            {
                return info.first < v;
            });
        
        if ((iter == std::end(Map)) || (iter->first != val)) {
            return nullptr;
        }
        
        return iter->second;
    }
    
};

/// @brief Values enumerator for
///     @ref tutorial2::field::E2_2 field.
using E2_2Val = E2_2Common::ValueType;

} // namespace field

} // namespace tutorial2


