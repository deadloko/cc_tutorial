// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of all client input messages bundle.

#pragma once

#include <tuple>
#include "tutorial19/message/Msg1.h"
#include "tutorial19/message/Msg2.h"
#include "tutorial19/message/Msg3.h"
#include "tutorial19/options/DefaultOptions.h"

namespace tutorial19
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = tutorial19::options::DefaultOptions>
using ClientInputMessages =
    std::tuple<
        tutorial19::message::Msg1<TBase, TOpt>,
        tutorial19::message::Msg2<TBase, TOpt>,
        tutorial19::message::Msg3<TBase, TOpt>
    >;

} // namespace input

} // namespace tutorial19


