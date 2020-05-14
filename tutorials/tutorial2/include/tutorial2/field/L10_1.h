// Generated by commsdsl2comms v3.4.1

/// @file
/// @brief Contains definition of <b>"L10_1"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "tutorial2/field/FieldBase.h"
#include "tutorial2/field/L10_1Common.h"
#include "tutorial2/options/DefaultOptions.h"

namespace tutorial2
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref L10_1 list.
/// @tparam TOpt Protocol options.
template <typename TOpt = tutorial2::options::DefaultOptions>
struct L10_1Members
{
    /// @brief Definition of <b>"Element"</b> field.
    struct Element : public
        comms::field::IntValue<
            tutorial2::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::field::L10_1MembersCommon::ElementCommon::name();
        }
        
    };
    
};

/// @brief Definition of <b>"L10_1"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = tutorial2::options::DefaultOptions, typename... TExtraOpts>
struct L10_1 : public
    comms::field::ArrayList<
        tutorial2::field::FieldBase<>,
        typename L10_1Members<TOpt>::Element,
        TExtraOpts...,
        typename TOpt::field::L10_1,
        comms::option::def::SequenceFixedSize<5U>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return tutorial2::field::L10_1Common::name();
    }
    
};

} // namespace field

} // namespace tutorial2


