// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of protocol default options for a client.

#pragma once

#include "DefaultOptions.h"

namespace tutorial20
{

namespace options
{

/// @brief Default options of the protocol for a client.
/// @tparam TBase Options to use as a basis.
template <typename TBase = tutorial20::options::DefaultOptions>
struct ClientDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for
        ///     @ref tutorial20::message::Connect message.
        using Connect =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Connect
            >;
        
    };
    
};

/// @brief Alias to @ref ClientDefaultOptionsT with default template parameter.
using ClientDefaultOptions = ClientDefaultOptionsT<>;

} // namespace options

} // namespace tutorial20


