// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of all server input messages bundle.

#pragma once

#include <tuple>
#include "tutorial7/message/Msg1.h"
#include "tutorial7/message/Msg2.h"
#include "tutorial7/message/Msg3.h"
#include "tutorial7/options/DefaultOptions.h"

namespace tutorial7
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = tutorial7::options::DefaultOptions>
using ServerInputMessages =
    std::tuple<
        tutorial7::message::Msg1<TBase, TOpt>,
        tutorial7::message::Msg2<TBase, TOpt>,
        tutorial7::message::Msg3<TBase, TOpt>
    >;

} // namespace input

} // namespace tutorial7


