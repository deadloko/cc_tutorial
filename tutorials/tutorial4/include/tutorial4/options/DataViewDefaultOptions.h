// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of protocol default options that apply
///     @b comms::option::app::OrigDataView to applicable fields.

#pragma once

#include "tutorial4/options/DefaultOptions.h"

namespace tutorial4
{

namespace options
{

/// @brief Default options for data view on contiguous buffers to avoid
///    unnecessary copy of data.
/// @tparam TBase Options to use as a basis.
template <typename TBase = tutorial4::options::DefaultOptions>
struct DataViewDefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field : public TBase::field
    {
        /// @brief Extra options for all the member fields of
        ///     @ref tutorial4::field::KeyValueProp bitfield.
        struct KeyValuePropMembers : public TBase::field::KeyValuePropMembers
        {
            /// @brief Extra options for all the member fields of
            ///     @ref tutorial4::field::KeyValuePropMembers::Prop3 bundle.
            struct Prop3Members : public TBase::field::KeyValuePropMembers::Prop3Members
            {
                /// @brief Extra options for @ref
                ///     tutorial4::field::KeyValuePropMembers::Prop3Members::Val
                ///     field.
                using Val = 
                    std::tuple<
                        comms::option::app::OrigDataView,
                        typename TBase::field::KeyValuePropMembers::Prop3Members::Val
                    >;
            };
            
        };
        
        /// @brief Extra options for all the member fields of
        ///     @ref tutorial4::field::TlvProp bitfield.
        struct TlvPropMembers : public TBase::field::TlvPropMembers
        {
            /// @brief Extra options for all the member fields of
            ///     @ref tutorial4::field::TlvPropMembers::Prop6 bundle.
            struct Prop6Members : public TBase::field::TlvPropMembers::Prop6Members
            {
                /// @brief Extra options for @ref
                ///     tutorial4::field::TlvPropMembers::Prop6Members::Val
                ///     field.
                using Val = 
                    std::tuple<
                        comms::option::app::OrigDataView,
                        typename TBase::field::TlvPropMembers::Prop6Members::Val
                    >;
            };
            
            /// @brief Extra options for all the member fields of
            ///     @ref tutorial4::field::TlvPropMembers::Any bundle.
            struct AnyMembers : public TBase::field::TlvPropMembers::AnyMembers
            {
                /// @brief Extra options for @ref
                ///     tutorial4::field::TlvPropMembers::AnyMembers::Val
                ///     field.
                using Val = 
                    std::tuple<
                        comms::option::app::OrigDataView,
                        typename TBase::field::TlvPropMembers::AnyMembers::Val
                    >;
            };
            
        };
        
    }; // struct field
    
    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for Layers of
        ///     @ref tutorial4::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     tutorial4::frame::FrameLayers::Data
            ///     layer.
            using Data = std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::frame::FrameLayers::Data
            >;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

/// @brief Alias to @ref DataViewDefaultOptionsT with default template parameter.
using DataViewDefaultOptions = DataViewDefaultOptionsT<>;

} // namespace options

} // namespace tutorial4


