// Generated by commsdsl2comms v3.4.3

/// @file
/// @brief Contains definition of <b>"Message 3"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "tutorial6/MsgId.h"
#include "tutorial6/message/Msg3Common.h"
#include "tutorial6/options/DefaultOptions.h"

namespace tutorial6
{

namespace message
{

/// @brief Fields of @ref Msg3.
/// @tparam TOpt Extra options
/// @see @ref Msg3
/// @headerfile "tutorial6/message/Msg3.h"
template <typename TOpt = tutorial6::options::DefaultOptions>
struct Msg3Fields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"Message 3"</b> message class.
/// @details
///     See @ref Msg3Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "tutorial6/message/Msg3.h"
template <typename TMsgBase, typename TOpt = tutorial6::options::DefaultOptions>
class Msg3 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<tutorial6::MsgId_M3>,
        comms::option::def::FieldsImpl<typename Msg3Fields<TOpt>::All>,
        comms::option::def::MsgType<Msg3<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<tutorial6::MsgId_M3>,
            comms::option::def::FieldsImpl<typename Msg3Fields<TOpt>::All>,
            comms::option::def::MsgType<Msg3<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 0U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return tutorial6::message::Msg3Common::name();
    }
    
    
};

} // namespace message

} // namespace tutorial6


