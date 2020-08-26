// Generated by commsdsl2comms v3.5.1

/// @file
/// @brief Contains definition of <b>"E2_2"</b> field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "tutorial2/field/E2_2Common.h"
#include "tutorial2/field/FieldBase.h"
#include "tutorial2/options/DefaultOptions.h"

namespace tutorial2
{

namespace field
{

/// @brief Definition of <b>"E2_2"</b> field.
/// @see @ref tutorial2::field::E2_2Val
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = tutorial2::options::DefaultOptions, typename... TExtraOpts>
class E2_2 : public
    comms::field::EnumValue<
        tutorial2::field::FieldBase<>,
        tutorial2::field::E2_2Val,
        TExtraOpts...,
        comms::option::def::DefaultNumValue<100>,
        comms::option::def::ValidNumValue<0>,
        comms::option::def::ValidNumValue<100>,
        comms::option::def::ValidNumValue<271>
    >
{
    using Base = 
        comms::field::EnumValue<
            tutorial2::field::FieldBase<>,
            tutorial2::field::E2_2Val,
            TExtraOpts...,
            comms::option::def::DefaultNumValue<100>,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::ValidNumValue<100>,
            comms::option::def::ValidNumValue<271>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Name of the field.
    static const char* name()
    {
        return tutorial2::field::E2_2Common::name();
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        return tutorial2::field::E2_2Common::valueName(val);
    }
    
    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::value());
    }
    
};

} // namespace field

} // namespace tutorial2


