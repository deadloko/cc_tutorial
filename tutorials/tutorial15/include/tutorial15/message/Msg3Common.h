// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref tutorial15::message::Msg3 message and its fields.

#pragma once

#include <cstdint>

namespace tutorial15
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref tutorial15::message::Msg3 message.
/// @see tutorial15::message::Msg3Fields
struct Msg3FieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref tutorial15::message::Msg3Fields::F1 field.
    struct F1MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref tutorial15::message::Msg3Fields::F1Members::Length field.
        struct LengthCommon
        {
            /// @brief Re-definition of the value type used by
            ///     tutorial15::message::Msg3Fields::F1Members::Length field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref tutorial15::message::Msg3Fields::F1Members::Length field.
            static const char* name()
            {
                return "Length";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref tutorial15::message::Msg3Fields::F1 field.
    struct F1Common
    {
        /// @brief Name of the @ref tutorial15::message::Msg3Fields::F1 field.
        static const char* name()
        {
            return "F1";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref tutorial15::message::Msg3 message.
/// @see tutorial15::message::Msg3
struct Msg3Common
{
    /// @brief Name of the @ref tutorial15::message::Msg3 message.
    static const char* name()
    {
        return "Message 3";
    }
    
};

} // namespace message

} // namespace tutorial15


