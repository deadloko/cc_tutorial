// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    fields used in definition of @ref tutorial5::frame::ClientToServerFrame frame.

#pragma once

#include <cstdint>

namespace tutorial5
{

namespace frame
{

/// @brief Common types and functions of fields using in definition of
///     @ref tutorial5::frame::ClientToServerFrame frame.
/// @see tutorial5::frame::ClientToServerFrameLayers
struct ClientToServerFrameLayersCommon
{
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref tutorial5::frame::ClientToServerFrameLayers::SyncMembers struct.
    struct SyncMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref tutorial5::frame::ClientToServerFrameLayers::SyncMembers::SyncField field.
        struct SyncFieldCommon
        {
            /// @brief Re-definition of the value type used by
            ///     tutorial5::frame::ClientToServerFrameLayers::SyncMembers::SyncField field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref tutorial5::frame::ClientToServerFrameLayers::SyncMembers::SyncField field.
            static const char* name()
            {
                return "SyncField";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref tutorial5::frame::ClientToServerFrameLayers::ChecksumMembers struct.
    struct ChecksumMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref tutorial5::frame::ClientToServerFrameLayers::ChecksumMembers::ChecksumField field.
        struct ChecksumFieldCommon
        {
            /// @brief Re-definition of the value type used by
            ///     tutorial5::frame::ClientToServerFrameLayers::ChecksumMembers::ChecksumField field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref tutorial5::frame::ClientToServerFrameLayers::ChecksumMembers::ChecksumField field.
            static const char* name()
            {
                return "ChecksumField";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref tutorial5::frame::ClientToServerFrameLayers::SizeMembers struct.
    struct SizeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref tutorial5::frame::ClientToServerFrameLayers::SizeMembers::SizeField field.
        struct SizeFieldCommon
        {
            /// @brief Re-definition of the value type used by
            ///     tutorial5::frame::ClientToServerFrameLayers::SizeMembers::SizeField field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref tutorial5::frame::ClientToServerFrameLayers::SizeMembers::SizeField field.
            static const char* name()
            {
                return "SizeField";
            }
            
        };
        
    };
    
};
} // namespace frame

} // namespace tutorial5


