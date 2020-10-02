// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace tutorial12
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
        ///     @ref tutorial12::message::Msg1 message.
        struct Msg1Fields
        {
            /// @brief Extra options for @ref
            ///     tutorial12::message::Msg1Fields::F1
            ///     field.
            using F1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     tutorial12::message::Msg1Fields::F2
            ///     field.
            using F2 = comms::option::app::EmptyOption;
            
        }; // struct Msg1Fields
        
        
        /// @brief Extra options for fields of
        ///     @ref tutorial12::message::Msg2 message.
        struct Msg2Fields
        {
            /// @brief Extra options for @ref
            ///     tutorial12::message::Msg2Fields::F1
            ///     field.
            using F1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     tutorial12::message::Msg2Fields::F2
            ///     field.
            using F2 = comms::option::app::EmptyOption;
            
        }; // struct Msg2Fields
        
        
        /// @brief Extra options for fields of
        ///     @ref tutorial12::message::Msg3 message.
        struct Msg3Fields
        {
            /// @brief Extra options for @ref
            ///     tutorial12::message::Msg3Fields::F1
            ///     field.
            using F1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     tutorial12::message::Msg3Fields::F2
            ///     field.
            using F2 = comms::option::app::EmptyOption;
            
        }; // struct Msg3Fields
        
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref tutorial12::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     tutorial12::frame::FrameLayers::Data
            ///     layer.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     tutorial12::frame::FrameLayers::Id
            ///     layer.
            using Id = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace tutorial12


