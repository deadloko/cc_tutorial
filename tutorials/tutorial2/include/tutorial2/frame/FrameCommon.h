// Generated by commsdsl2comms v3.4.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    fields used in definition of @ref tutorial2::frame::Frame frame.

#pragma once

#include <cstdint>
#include "tutorial2/field/MsgIdCommon.h"

namespace tutorial2
{

namespace frame
{

/// @brief Common types and functions of fields using in definition of
///     @ref tutorial2::frame::Frame frame.
/// @see tutorial2::frame::FrameLayers
struct FrameLayersCommon
{
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref tutorial2::frame::FrameLayers::SizeMembers struct.
    struct SizeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref tutorial2::frame::FrameLayers::SizeMembers::SizeField field.
        struct SizeFieldCommon
        {
            /// @brief Re-definition of the value type used by
            ///     tutorial2::frame::FrameLayers::SizeMembers::SizeField field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref tutorial2::frame::FrameLayers::SizeMembers::SizeField field.
            static const char* name()
            {
                return "SizeField";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref tutorial2::frame::FrameLayers::IDMembers struct.
    struct IDMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref tutorial2::frame::FrameLayers::IDMembers::MsgId field.
        using MsgIdCommon = tutorial2::field::MsgIdCommon;
        
    };
    
};
} // namespace frame

} // namespace tutorial2


