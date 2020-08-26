// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace tutorial15
{

namespace options
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for
        ///     @ref tutorial15::message::Msg1 message.
        using Msg1 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref tutorial15::message::Msg2 message.
        struct Msg2Fields
        {
            /// @brief Extra options for @ref
            ///     tutorial15::message::Msg2Fields::F1
            ///     field.
            using F1 = comms::option::app::EmptyOption;
            
        }; // struct Msg2Fields
        
        
        /// @brief Extra options for fields of
        ///     @ref tutorial15::message::Msg3 message.
        struct Msg3Fields
        {
            /// @brief Extra options for @ref
            ///     tutorial15::message::Msg3Fields::F1
            ///     field.
            using F1 = comms::option::app::EmptyOption;
            
        }; // struct Msg3Fields
        
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref tutorial15::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     tutorial15::frame::FrameLayers::Data
            ///     layer.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     tutorial15::frame::FrameLayers::Id
            ///     layer.
            using Id = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace tutorial15


