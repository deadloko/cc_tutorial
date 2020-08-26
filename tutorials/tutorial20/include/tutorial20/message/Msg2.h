// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"Message 2"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "tutorial20/MsgId.h"
#include "tutorial20/field/FieldBase.h"
#include "tutorial20/message/Msg2Common.h"
#include "tutorial20/options/DefaultOptions.h"

namespace tutorial20
{

namespace message
{

/// @brief Fields of @ref Msg2.
/// @tparam TOpt Extra options
/// @see @ref Msg2
/// @headerfile "tutorial20/message/Msg2.h"
template <typename TOpt = tutorial20::options::DefaultOptions>
struct Msg2Fields
{
    /// @brief Inner field of @ref F1 optional.
    /// @see @ref tutorial20::message::Msg2FieldsCommon::F1Val
    class F1Field : public
        comms::field::EnumValue<
            tutorial20::field::FieldBase<>,
            tutorial20::message::Msg2FieldsCommon::F1Val,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base = 
            comms::field::EnumValue<
                tutorial20::field::FieldBase<>,
                tutorial20::message::Msg2FieldsCommon::F1Val,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial20::message::Msg2FieldsCommon::F1Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return tutorial20::message::Msg2FieldsCommon::F1Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"F1"</b> field.
    struct F1 : public
        comms::field::Optional<
            F1Field,
            comms::option::def::ExistsByDefault,
            comms::option::def::ExistsSinceVersion<1U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return F1Field::name();
        }
    };
    
    /// @brief Inner field of @ref F2 optional.
    /// @see @ref tutorial20::message::Msg2FieldsCommon::F2Val
    class F2Field : public
        comms::field::EnumValue<
            tutorial20::field::FieldBase<>,
            tutorial20::message::Msg2FieldsCommon::F2Val,
            comms::option::def::VersionStorage,
            comms::option::def::InvalidByDefault
        >
    {
        using Base = 
            comms::field::EnumValue<
                tutorial20::field::FieldBase<>,
                tutorial20::message::Msg2FieldsCommon::F2Val,
                comms::option::def::VersionStorage,
                comms::option::def::InvalidByDefault
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial20::message::Msg2FieldsCommon::F2Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return tutorial20::message::Msg2FieldsCommon::F2Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
        /// @brief Validity check function.
        bool valid() const
        {
            if (Base::valid()) {
                return true;
            }
        
            if (3U <= Base::getVersion()) {
                if (Base::value() == static_cast<typename Base::ValueType>(0)) {
                    return true;
                }
            }
            
            if ((4U <= Base::getVersion()) &&
                (Base::getVersion() < 5U)) {
                if (Base::value() == static_cast<typename Base::ValueType>(1)) {
                    return true;
                }
            }
            
            if (5U <= Base::getVersion()) {
                if (Base::value() == static_cast<typename Base::ValueType>(2)) {
                    return true;
                }
            }
            
            return false;
        }
        
    };
    
    /// @brief Definition of <b>"F2"</b> field.
    struct F2 : public
        comms::field::Optional<
            F2Field,
            comms::option::def::ExistsByDefault,
            comms::option::def::ExistsSinceVersion<3U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return F2Field::name();
        }
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1,
        F2
    >;
};

/// @brief Definition of <b>"Message 2"</b> message class.
/// @details
///     See @ref Msg2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "tutorial20/message/Msg2.h"
template <typename TMsgBase, typename TOpt = tutorial20::options::DefaultOptions>
class Msg2 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<tutorial20::MsgId_M2>,
        comms::option::def::FieldsImpl<typename Msg2Fields<TOpt>::All>,
        comms::option::def::MsgType<Msg2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<tutorial20::MsgId_M2>,
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
    COMMS_MSG_FIELDS_NAMES(
        f1,
        f2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return tutorial20::message::Msg2Common::name();
    }
    
    
};

} // namespace message

} // namespace tutorial20


