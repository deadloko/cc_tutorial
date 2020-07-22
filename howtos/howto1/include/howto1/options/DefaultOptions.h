// Generated by commsdsl2comms v3.4.3

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace howto1
{

namespace options
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for fields of
        ///     @ref howto1::message::Msg2 message.
        struct Msg2Fields
        {
            /// @brief Extra options for @ref
            ///     howto1::message::Msg2Fields::F1 field.
            using F1 = comms::option::app::EmptyOption;
            
        }; // struct Msg2Fields
        
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref howto1::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     howto1::frame::FrameLayers::Data layer.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     howto1::frame::FrameLayers::Id layer.
            using Id = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     howto1::frame::FrameLayers::SizeWithFlags
            ///     layer.
            using SizeWithFlags = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace howto1


