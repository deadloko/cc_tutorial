// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of protocol default options for bare-metal application
///    where usage of dynamic memory allocation is disabled.

#pragma once

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

#include "tutorial5/options/DefaultOptions.h"

namespace tutorial5
{

namespace options
{

/// @brief Default options for bare-metal application where usage of dynamic
///    memory allocation is diabled.
/// @tparam TBase Options to use as a basis.
template <typename TBase = tutorial5::options::DefaultOptions>
struct BareMetalDefaultOptionsT : public TBase
{
    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for Layers of
        ///     @ref tutorial5::frame::ClientToServerFrame frame.
        struct ClientToServerFrameLayers : public TBase::frame::ClientToServerFrameLayers
        {
            /// @brief Extra options for @ref
            ///     tutorial5::frame::ClientToServerFrameLayers::Data
            ///     layer.
            using Data = std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>,
                typename TBase::frame::ClientToServerFrameLayers::Data
            >;
            
            /// @brief Extra options for @ref
            ///     tutorial5::frame::ClientToServerFrameLayers::Id
            ///     layer.
            using Id = std::tuple<
                comms::option::app::InPlaceAllocation,
                typename TBase::frame::ClientToServerFrameLayers::Id
            >;
            
        }; // struct ClientToServerFrameLayers
        
        /// @brief Extra options for Layers of
        ///     @ref tutorial5::frame::ServerToClientFrame frame.
        struct ServerToClientFrameLayers : public TBase::frame::ServerToClientFrameLayers
        {
            /// @brief Extra options for @ref
            ///     tutorial5::frame::ServerToClientFrameLayers::Data
            ///     layer.
            using Data = std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>,
                typename TBase::frame::ServerToClientFrameLayers::Data
            >;
            
            /// @brief Extra options for @ref
            ///     tutorial5::frame::ServerToClientFrameLayers::Id
            ///     layer.
            using Id = std::tuple<
                comms::option::app::InPlaceAllocation,
                typename TBase::frame::ServerToClientFrameLayers::Id
            >;
            
        }; // struct ServerToClientFrameLayers
        
    }; // struct frame
    
    
};

/// @brief Alias to @ref BareMetalDefaultOptionsT with default template parameter.
using BareMetalDefaultOptions = BareMetalDefaultOptionsT<>;

} // namespace options

} // namespace tutorial5


