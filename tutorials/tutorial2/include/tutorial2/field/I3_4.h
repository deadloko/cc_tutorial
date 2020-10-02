// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of <b>"I3_4"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "tutorial2/field/FieldBase.h"
#include "tutorial2/field/I3_4Common.h"
#include "tutorial2/options/DefaultOptions.h"

namespace tutorial2
{

namespace field
{

/// @brief Definition of <b>"I3_4"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = tutorial2::options::DefaultOptions, typename... TExtraOpts>
class I3_4 : public
    comms::field::IntValue<
        tutorial2::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        comms::option::def::DefaultNumValue<1>
    >
{
    using Base = 
        comms::field::IntValue<
            tutorial2::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...,
            comms::option::def::DefaultNumValue<1>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Special value <b>"S1"</b>.
    static constexpr ValueType valueS1()
    {
        return tutorial2::field::I3_4Common::valueS1();
    }
    
    /// @brief Check the value is equal to special @ref valueS1().
    bool isS1() const
    {
        return Base::value() == valueS1();
    }
    
    /// @brief Assign special value @ref valueS1() to the field.
    void setS1()
    {
        Base::value() = valueS1();
    }
    
    /// @brief Special value <b>"S2"</b>.
    static constexpr ValueType valueS2()
    {
        return tutorial2::field::I3_4Common::valueS2();
    }
    
    /// @brief Check the value is equal to special @ref valueS2().
    bool isS2() const
    {
        return Base::value() == valueS2();
    }
    
    /// @brief Assign special value @ref valueS2() to the field.
    void setS2()
    {
        Base::value() = valueS2();
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return tutorial2::field::I3_4Common::name();
    }
    
};

} // namespace field

} // namespace tutorial2


