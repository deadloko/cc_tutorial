// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"Message 2 (2)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "tutorial18/MsgId.h"
#include "tutorial18/field/FieldBase.h"
#include "tutorial18/message/Msg2_2Common.h"
#include "tutorial18/options/DefaultOptions.h"

namespace tutorial18
{

namespace message
{

/// @brief Fields of @ref Msg2_2.
/// @tparam TOpt Extra options
/// @see @ref Msg2_2
/// @headerfile "tutorial18/message/Msg2_2.h"
template <typename TOpt = tutorial18::options::DefaultOptions>
struct Msg2_2Fields
{
    /// @brief Definition of <b>"Type"</b> field.
    struct Type : public
        comms::field::IntValue<
            tutorial18::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial18::message::Msg2_2FieldsCommon::TypeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"F1"</b> field.
    struct F1 : public
        comms::field::IntValue<
            tutorial18::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial18::message::Msg2_2FieldsCommon::F1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        F1
    >;
};

/// @brief Definition of <b>"Message 2 (2)"</b> message class.
/// @details
///     See @ref Msg2_2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "tutorial18/message/Msg2_2.h"
template <typename TMsgBase, typename TOpt = tutorial18::options::DefaultOptions>
class Msg2_2 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<tutorial18::MsgId_M2>,
        comms::option::def::FieldsImpl<typename Msg2_2Fields<TOpt>::All>,
        comms::option::def::MsgType<Msg2_2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<tutorial18::MsgId_M2>,
            comms::option::def::FieldsImpl<typename Msg2_2Fields<TOpt>::All>,
            comms::option::def::MsgType<Msg2_2<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() access fuction
    ///         for @ref Msg2_2Fields::Type field.
    ///     @li @b Field_f1 type and @b field_f1() access fuction
    ///         for @ref Msg2_2Fields::F1 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        f1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 5U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 5U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return tutorial18::message::Msg2_2Common::name();
    }
    
    
};

} // namespace message

} // namespace tutorial18


