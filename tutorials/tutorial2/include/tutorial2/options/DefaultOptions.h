// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace tutorial2
{

namespace options
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for all the member fields of
        ///     @ref tutorial2::field::B8_1 bundle.
        struct B8_1Members
        {
            /// @brief Extra options for @ref
            ///     tutorial2::field::B8_1Members::M3 field.
            using M3 = comms::option::app::EmptyOption;
            
        };
        
        /// @brief Extra options for all the member fields of
        ///     @ref tutorial2::field::B8_2 bundle.
        struct B8_2Members
        {
            /// @brief Extra options for @ref
            ///     tutorial2::field::B8_2Members::M3 field.
            using M3 = comms::option::app::EmptyOption;
            
        };
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::D7_1 field.
        using D7_1 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::D7_2 field.
        using D7_2 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::L10_1 field.
        using L10_1 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::L10_2 field.
        using L10_2 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for all the member fields of
        ///     @ref tutorial2::field::L10_3 list.
        struct L10_3Members
        {
            /// @brief Extra options for all the member fields of
            ///     @ref tutorial2::field::L10_3Members::Element bundle.
            struct ElementMembers
            {
                /// @brief Extra options for @ref
                ///     tutorial2::field::L10_3Members::ElementMembers::M2
                ///     field.
                using M2 = comms::option::app::EmptyOption;
                
            };
            
        };
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::L10_3 field.
        using L10_3 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for all the member fields of
        ///     @ref tutorial2::field::L10_4 list.
        struct L10_4Members
        {
            /// @brief Extra options for all the member fields of
            ///     @ref tutorial2::field::L10_4Members::Element bundle.
            struct ElementMembers
            {
                /// @brief Extra options for @ref
                ///     tutorial2::field::L10_4Members::ElementMembers::M3
                ///     field.
                using M3 = comms::option::app::EmptyOption;
                
            };
            
        };
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::L10_4 field.
        using L10_4 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::S6_1 field.
        using S6_1 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::S6_2 field.
        using S6_2 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::S6_3 field.
        using S6_3 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     tutorial2::field::S6_4 field.
        using S6_4 = comms::option::app::EmptyOption;
        
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for fields of
        ///     @ref tutorial2::message::Msg6 message.
        struct Msg6Fields
        {
            /// @brief Extra options for @ref
            ///     tutorial2::message::Msg6Fields::F5
            ///     field.
            using F5 = comms::option::app::EmptyOption;
            
        }; // struct Msg6Fields
        
        
        /// @brief Extra options for fields of
        ///     @ref tutorial2::message::Msg7 message.
        struct Msg7Fields
        {
            /// @brief Extra options for @ref
            ///     tutorial2::message::Msg7Fields::F3
            ///     field.
            using F3 = comms::option::app::EmptyOption;
            
        }; // struct Msg7Fields
        
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref tutorial2::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     tutorial2::frame::FrameLayers::Data
            ///     layer.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     tutorial2::frame::FrameLayers::ID layer.
            using ID = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace tutorial2


