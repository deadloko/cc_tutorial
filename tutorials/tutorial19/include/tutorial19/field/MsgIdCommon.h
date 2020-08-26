// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref tutorial19::field::MsgId field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "tutorial19/MsgId.h"

namespace tutorial19
{

namespace field
{

/// @brief Common types and functions for
///     @ref tutorial19::field::MsgId field.
struct MsgIdCommon
{
    /// @brief Values enumerator for
    ///     @ref tutorial19::field::MsgId field.
    using ValueType = tutorial19::MsgId;
    
    /// @brief Name of the @ref tutorial19::field::MsgId field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(tutorial19::MsgId val)
    {
        static const char* Map[] = {
            nullptr,
            "Message 1",
            "Message 2",
            "Message 3"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref tutorial19::field::MsgId field.
using MsgIdVal = MsgIdCommon::ValueType;

} // namespace field

} // namespace tutorial19


