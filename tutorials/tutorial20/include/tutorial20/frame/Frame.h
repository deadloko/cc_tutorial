// Generated by commsdsl2comms v3.4.3

/// @file
/// @brief Contains definition of <b>"Frame"</b> frame class.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "comms/protocol/MsgDataLayer.h"
#include "comms/protocol/MsgIdLayer.h"
#include "comms/protocol/MsgSizeLayer.h"
#include "comms/protocol/TransportValueLayer.h"
#include "tutorial20/field/FieldBase.h"
#include "tutorial20/field/MsgId.h"
#include "tutorial20/field/Version.h"
#include "tutorial20/frame/FrameCommon.h"
#include "tutorial20/input/AllMessages.h"
#include "tutorial20/options/DefaultOptions.h"

namespace tutorial20
{

namespace frame
{

/// @brief Layers definition of @ref Frame frame class.
/// @tparam TOpt Protocol options.
/// @see @ref Frame
/// @headerfile "tutorial20/frame/Frame.h"
template <typename TOpt = tutorial20::options::DefaultOptions>
struct FrameLayers
{
    /// @brief Definition of layer "Data".
    using Data =
        comms::protocol::MsgDataLayer<
            typename TOpt::frame::FrameLayers::Data
        >;
    
    /// @brief Definition of layer "Version".
    using Version =
        comms::protocol::TransportValueLayer<
            tutorial20::field::Version<TOpt, comms::option::def::EmptySerialization>,
            0U,
            Data,
            comms::option::def::PseudoValue
        >;
    
    /// @brief Definition of layer "Id".
    template <typename TMessage, typename TAllMessages>
    using Id =
        comms::protocol::MsgIdLayer<
            tutorial20::field::MsgId<TOpt>,
            TMessage,
            TAllMessages,
            Version,
            typename TOpt::frame::FrameLayers::Id
        >;
    
    /// @brief Scope for field(s) of @ref Size layer.
    struct SizeMembers
    {
        /// @brief Definition of <b>"Size"</b> field.
        struct Field : public
            comms::field::IntValue<
                tutorial20::field::FieldBase<>,
                std::uint16_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return tutorial20::frame::FrameLayersCommon::SizeMembersCommon::FieldCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of layer "Size".
    template <typename TMessage, typename TAllMessages>
    using Size =
        comms::protocol::MsgSizeLayer<
            typename SizeMembers::Field,
            Id<TMessage, TAllMessages>
        >;
    
    /// @brief Final protocol stack definition.
    template<typename TMessage, typename TAllMessages>
    using Stack = Size<TMessage, TAllMessages>;
    
};

/// @brief Definition of <b>"Frame"</b> frame class.
/// @tparam TMessage Common interface class of all the messages
/// @tparam TAllMessages All supported input messages.
/// @tparam TOpt Frame definition options
/// @headerfile "tutorial20/frame/Frame.h"
template <
   typename TMessage,
   typename TAllMessages = tutorial20::input::AllMessages<TMessage>,
   typename TOpt = tutorial20::options::DefaultOptions
>
class Frame : public
    FrameLayers<TOpt>::template Stack<TMessage, TAllMessages>
{
    using Base =
        typename FrameLayers<TOpt>::template Stack<TMessage, TAllMessages>;
public:
    /// @brief Allow access to frame definition layers.
    /// @details See definition of @b COMMS_PROTOCOL_LAYERS_ACCESS macro
    ///     from COMMS library for details.
    ///
    ///     The generated functions are:
    ///     @li layer_data() for @ref FrameLayers::Data layer.
    ///     @li layer_version() for @ref FrameLayers::Version layer.
    ///     @li layer_id() for @ref FrameLayers::Id layer.
    ///     @li layer_size() for @ref FrameLayers::Size layer.
    COMMS_PROTOCOL_LAYERS_ACCESS(
        data,
        version,
        id,
        size
    );
};

} // namespace frame

} // namespace tutorial20


