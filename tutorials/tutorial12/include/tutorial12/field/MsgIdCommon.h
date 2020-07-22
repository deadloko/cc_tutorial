// Generated by commsdsl2comms v3.4.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref tutorial12::field::MsgId field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "tutorial12/MsgId.h"

namespace tutorial12
{

namespace field
{

/// @brief Common types and functions for
///     @ref tutorial12::field::MsgId field.
struct MsgIdCommon
{
    /// @brief Values enumerator for
    ///     @ref tutorial12::field::MsgId field.
    using ValueType = tutorial12::MsgId;
    
    /// @brief Name of the @ref tutorial12::field::MsgId field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(tutorial12::MsgId val)
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
///     @ref tutorial12::field::MsgId field.
using MsgIdVal = MsgIdCommon::ValueType;

} // namespace field

} // namespace tutorial12


