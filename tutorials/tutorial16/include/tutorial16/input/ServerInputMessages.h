// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of all server input messages bundle.

#pragma once

#include <tuple>
#include "tutorial16/message/Msg1.h"
#include "tutorial16/message/Msg2.h"
#include "tutorial16/options/DefaultOptions.h"

namespace tutorial16
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = tutorial16::options::DefaultOptions>
using ServerInputMessages =
    std::tuple<
        tutorial16::message::Msg1<TBase, TOpt>,
        tutorial16::message::Msg2<TBase, TOpt>
    >;

} // namespace input

} // namespace tutorial16


