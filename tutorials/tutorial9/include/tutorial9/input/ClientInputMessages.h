// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of all client input messages bundle.

#pragma once

#include <tuple>
#include "tutorial9/message/Msg2.h"
#include "tutorial9/message/Msg4.h"
#include "tutorial9/options/DefaultOptions.h"

namespace tutorial9
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = tutorial9::options::DefaultOptions>
using ClientInputMessages =
    std::tuple<
        tutorial9::message::Msg2<TBase, TOpt>,
        tutorial9::message::Msg4<TBase, TOpt>
    >;

} // namespace input

} // namespace tutorial9


