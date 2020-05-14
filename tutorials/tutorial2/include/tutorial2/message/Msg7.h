// Generated by commsdsl2comms v3.4.1

/// @file
/// @brief Contains definition of <b>"Message 7"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "tutorial2/MsgId.h"
#include "tutorial2/field/D7_1.h"
#include "tutorial2/field/D7_2.h"
#include "tutorial2/field/FieldBase.h"
#include "tutorial2/message/Msg7Common.h"
#include "tutorial2/options/DefaultOptions.h"

namespace tutorial2
{

namespace message
{

/// @brief Fields of @ref Msg7.
/// @tparam TOpt Extra options
/// @see @ref Msg7
/// @headerfile "tutorial2/message/Msg7.h"
template <typename TOpt = tutorial2::options::DefaultOptions>
struct Msg7Fields
{
    /// @brief Definition of <b>"F1"</b> field.
    struct F1 : public
        tutorial2::field::D7_1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::message::Msg7FieldsCommon::F1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F2"</b> field.
    struct F2 : public
        tutorial2::field::D7_2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::message::Msg7FieldsCommon::F2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F3"</b> field.
    struct F3 : public
        comms::field::ArrayList<
            tutorial2::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::Msg7Fields::F3
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::message::Msg7FieldsCommon::F3Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1,
        F2,
        F3
    >;
};

/// @brief Definition of <b>"Message 7"</b> message class.
/// @details
///     See @ref Msg7Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "tutorial2/message/Msg7.h"
template <typename TMsgBase, typename TOpt = tutorial2::options::DefaultOptions>
class Msg7 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<tutorial2::MsgId_M7>,
        comms::option::def::FieldsImpl<typename Msg7Fields<TOpt>::All>,
        comms::option::def::MsgType<Msg7<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<tutorial2::MsgId_M7>,
            comms::option::def::FieldsImpl<typename Msg7Fields<TOpt>::All>,
            comms::option::def::MsgType<Msg7<TMsgBase, TOpt> >,
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
    ///         for @ref Msg7Fields::F1 field.
    ///     @li @b Field_f2 type and @b field_f2() access fuction
    ///         for @ref Msg7Fields::F2 field.
    ///     @li @b Field_f3 type and @b field_f3() access fuction
    ///         for @ref Msg7Fields::F3 field.
    COMMS_MSG_FIELDS_NAMES(
        f1,
        f2,
        f3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return tutorial2::message::Msg7Common::name();
    }
    
    
};

} // namespace message

} // namespace tutorial2


