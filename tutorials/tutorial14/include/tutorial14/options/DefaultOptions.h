// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace tutorial14
{

namespace options
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref tutorial14::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     tutorial14::frame::FrameLayers::Data
            ///     layer.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     tutorial14::frame::FrameLayers::Id
            ///     layer.
            using Id = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace tutorial14

