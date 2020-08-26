// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"Message 2"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "tutorial15/MsgId.h"
#include "tutorial15/field/FieldBase.h"
#include "tutorial15/message/Msg2Common.h"
#include "tutorial15/options/DefaultOptions.h"

namespace tutorial15
{

namespace message
{

/// @brief Fields of @ref Msg2.
/// @tparam TOpt Extra options
/// @see @ref Msg2
/// @headerfile "tutorial15/message/Msg2.h"
template <typename TOpt = tutorial15::options::DefaultOptions>
struct Msg2Fields
{
    /// @brief Scope for all the member fields of
    ///     @ref F1 string.
    struct F1Members
    {
        /// @brief Definition of <b>"Length"</b> field.
        struct Length : public
            comms::field::IntValue<
                tutorial15::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return tutorial15::message::Msg2FieldsCommon::F1MembersCommon::LengthCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"F1"</b> field.
    class F1 : public
        comms::field::String<
            tutorial15::field::FieldBase<>,
            typename TOpt::message::Msg2Fields::F1,
            comms::option::def::SequenceSerLengthFieldPrefix<typename F1Members::Length>
        >
    {
        using Base = 
            comms::field::String<
                tutorial15::field::FieldBase<>,
                typename TOpt::message::Msg2Fields::F1,
                comms::option::def::SequenceSerLengthFieldPrefix<typename F1Members::Length>
            >;
    public:
        /// @brief Default constructor
        F1()
        {
            static const char Str[] = "hello";
            static const std::size_t StrSize = std::extent<decltype(Str)>::value;
            Base::value() = typename Base::ValueType(&Str[0], StrSize - 1);
        }
        
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial15::message::Msg2FieldsCommon::F1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1
    >;
};

/// @brief Definition of <b>"Message 2"</b> message class.
/// @details
///     See @ref Msg2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "tutorial15/message/Msg2.h"
template <typename TMsgBase, typename TOpt = tutorial15::options::DefaultOptions>
class Msg2 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<tutorial15::MsgId_M2>,
        comms::option::def::FieldsImpl<typename Msg2Fields<TOpt>::All>,
        comms::option::def::MsgType<Msg2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<tutorial15::MsgId_M2>,
            comms::option::def::FieldsImpl<typename Msg2Fields<TOpt>::All>,
            comms::option::def::MsgType<Msg2<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_f1 type and @b field_f1() access fuction
    ///         for @ref Msg2Fields::F1 field.
    COMMS_MSG_FIELDS_NAMES(
        f1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return tutorial15::message::Msg2Common::name();
    }
    
    
};

} // namespace message

} // namespace tutorial15


