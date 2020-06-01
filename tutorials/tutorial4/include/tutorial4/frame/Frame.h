// Generated by commsdsl2comms v3.4.1

/// @file
/// @brief Contains definition of <b>"Frame"</b> frame class.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "comms/protocol/MsgDataLayer.h"
#include "comms/protocol/MsgIdLayer.h"
#include "comms/protocol/MsgSizeLayer.h"
#include "tutorial4/field/FieldBase.h"
#include "tutorial4/field/MsgId.h"
#include "tutorial4/frame/FrameCommon.h"
#include "tutorial4/input/AllMessages.h"
#include "tutorial4/options/DefaultOptions.h"

namespace tutorial4
{

namespace frame
{

/// @brief Layers definition of @ref Frame frame class.
/// @tparam TOpt Protocol options.
/// @see @ref Frame
/// @headerfile "tutorial4/frame/Frame.h"
template <typename TOpt = tutorial4::options::DefaultOptions>
struct FrameLayers
{
    /// @brief Definition of layer "Data".
    using Data =
        comms::protocol::MsgDataLayer<
            typename TOpt::frame::FrameLayers::Data
        >;
    
    /// @brief Definition of layer "ID".
    template <typename TMessage, typename TAllMessages>
    using ID =
        comms::protocol::MsgIdLayer<
            tutorial4::field::MsgId<TOpt>,
            TMessage,
            TAllMessages,
            Data,
            typename TOpt::frame::FrameLayers::ID
        >;
    
    /// @brief Scope for field(s) of @ref Size layer.
    struct SizeMembers
    {
        /// @brief Definition of <b>"SizeField"</b> field.
        struct SizeField : public
            comms::field::IntValue<
                tutorial4::field::FieldBase<>,
                std::uint16_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return tutorial4::frame::FrameLayersCommon::SizeMembersCommon::SizeFieldCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of layer "Size".
    template <typename TMessage, typename TAllMessages>
    using Size =
        comms::protocol::MsgSizeLayer<
            typename SizeMembers::SizeField,
            ID<TMessage, TAllMessages>
        >;
    
    /// @brief Final protocol stack definition.
    template<typename TMessage, typename TAllMessages>
    using Stack = Size<TMessage, TAllMessages>;
    
};

/// @brief Definition of <b>"Frame"</b> frame class.
/// @tparam TMessage Common interface class of all the messages
/// @tparam TAllMessages All supported input messages.
/// @tparam TOpt Frame definition options
/// @headerfile "tutorial4/frame/Frame.h"
template <
   typename TMessage,
   typename TAllMessages = tutorial4::input::AllMessages<TMessage>,
   typename TOpt = tutorial4::options::DefaultOptions
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
    ///     @li layer_iD() for @ref FrameLayers::ID layer.
    ///     @li layer_size() for @ref FrameLayers::Size layer.
    COMMS_PROTOCOL_LAYERS_ACCESS(
        data,
        iD,
        size
    );
};

} // namespace frame

} // namespace tutorial4

