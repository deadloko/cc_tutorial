// Generated by commsdsl2comms v3.4.1

/// @file
/// @brief Contains definition of <b>"Message 2"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "tutorial2/MsgId.h"
#include "tutorial2/field/E2_1.h"
#include "tutorial2/field/E2_2.h"
#include "tutorial2/field/FieldBase.h"
#include "tutorial2/message/Msg2Common.h"
#include "tutorial2/options/DefaultOptions.h"

namespace tutorial2
{

namespace message
{

/// @brief Fields of @ref Msg2.
/// @tparam TOpt Extra options
/// @see @ref Msg2
/// @headerfile "tutorial2/message/Msg2.h"
template <typename TOpt = tutorial2::options::DefaultOptions>
struct Msg2Fields
{
    /// @brief Definition of <b>"F1"</b> field.
    struct F1 : public
        tutorial2::field::E2_1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::message::Msg2FieldsCommon::F1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F2"</b> field.
    struct F2 : public
        tutorial2::field::E2_2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::message::Msg2FieldsCommon::F2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F3"</b> field.
    /// @details
    ///     Some Inner enum
    /// @see @ref tutorial2::message::Msg2FieldsCommon::F3Val
    class F3 : public
        comms::field::EnumValue<
            tutorial2::field::FieldBase<>,
            tutorial2::message::Msg2FieldsCommon::F3Val,
            comms::option::def::DefaultNumValue<10>,
            comms::option::def::ValidNumValue<-100>,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::ValidNumValue<10>
        >
    {
        using Base = 
            comms::field::EnumValue<
                tutorial2::field::FieldBase<>,
                tutorial2::message::Msg2FieldsCommon::F3Val,
                comms::option::def::DefaultNumValue<10>,
                comms::option::def::ValidNumValue<-100>,
                comms::option::def::ValidNumValue<0>,
                comms::option::def::ValidNumValue<10>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::message::Msg2FieldsCommon::F3Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return tutorial2::message::Msg2FieldsCommon::F3Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"F4"</b> field.
    /// @see @ref tutorial2::message::Msg2FieldsCommon::F4Val
    class F4 : public
        comms::field::EnumValue<
            tutorial2::field::FieldBase<>,
            tutorial2::message::Msg2FieldsCommon::F4Val,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::ValidNumValue<255>,
            comms::option::def::ValidNumValue<767>,
            comms::option::def::ValidNumValue<4095>
        >
    {
        using Base = 
            comms::field::EnumValue<
                tutorial2::field::FieldBase<>,
                tutorial2::message::Msg2FieldsCommon::F4Val,
                comms::option::def::ValidNumValue<0>,
                comms::option::def::ValidNumValue<255>,
                comms::option::def::ValidNumValue<767>,
                comms::option::def::ValidNumValue<4095>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::message::Msg2FieldsCommon::F4Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return tutorial2::message::Msg2FieldsCommon::F4Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1,
        F2,
        F3,
        F4
    >;
};

/// @brief Definition of <b>"Message 2"</b> message class.
/// @details
///     See @ref Msg2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "tutorial2/message/Msg2.h"
template <typename TMsgBase, typename TOpt = tutorial2::options::DefaultOptions>
class Msg2 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<tutorial2::MsgId_M2>,
        comms::option::def::FieldsImpl<typename Msg2Fields<TOpt>::All>,
        comms::option::def::MsgType<Msg2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<tutorial2::MsgId_M2>,
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
    ///     @li @b Field_f2 type and @b field_f2() access fuction
    ///         for @ref Msg2Fields::F2 field.
    ///     @li @b Field_f3 type and @b field_f3() access fuction
    ///         for @ref Msg2Fields::F3 field.
    ///     @li @b Field_f4 type and @b field_f4() access fuction
    ///         for @ref Msg2Fields::F4 field.
    COMMS_MSG_FIELDS_NAMES(
        f1,
        f2,
        f3,
        f4
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 6U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return tutorial2::message::Msg2Common::name();
    }
    
    
};

} // namespace message

} // namespace tutorial2


