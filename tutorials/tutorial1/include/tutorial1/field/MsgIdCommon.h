// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref tutorial1::field::MsgId field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "tutorial1/MsgId.h"

namespace tutorial1
{

namespace field
{

/// @brief Common types and functions for
///     @ref tutorial1::field::MsgId field.
struct MsgIdCommon
{
    /// @brief Values enumerator for
    ///     @ref tutorial1::field::MsgId field.
    using ValueType = tutorial1::MsgId;
    
    /// @brief Name of the @ref tutorial1::field::MsgId field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(tutorial1::MsgId val)
    {
        static const char* Map[] = {
            nullptr,
            "M1",
            "M2"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref tutorial1::field::MsgId field.
using MsgIdVal = MsgIdCommon::ValueType;

} // namespace field

} // namespace tutorial1


