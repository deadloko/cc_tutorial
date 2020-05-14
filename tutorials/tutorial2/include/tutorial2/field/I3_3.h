// Generated by commsdsl2comms v3.4.1

/// @file
/// @brief Contains definition of <b>"I3_3"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "tutorial2/field/FieldBase.h"
#include "tutorial2/field/I3_3Common.h"
#include "tutorial2/options/DefaultOptions.h"

namespace tutorial2
{

namespace field
{

/// @brief Definition of <b>"I3_3"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = tutorial2::options::DefaultOptions, typename... TExtraOpts>
struct I3_3 : public
    comms::field::IntValue<
        tutorial2::field::FieldBase<>,
        std::uint32_t,
        TExtraOpts...,
        comms::option::def::VarLength<1U, 4U>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return tutorial2::field::I3_3Common::name();
    }
    
};

} // namespace field

} // namespace tutorial2


