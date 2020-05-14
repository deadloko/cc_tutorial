// Generated by commsdsl2comms v3.4.1

/// @file
/// @brief Contains definition of <b>"B8_1"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "tutorial2/field/B8_1Common.h"
#include "tutorial2/field/FieldBase.h"
#include "tutorial2/options/DefaultOptions.h"

namespace tutorial2
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref B8_1 bundle.
/// @tparam TOpt Protocol options.
template <typename TOpt = tutorial2::options::DefaultOptions>
struct B8_1Members
{
    /// @brief Definition of <b>"M1"</b> field.
    struct M1 : public
        comms::field::IntValue<
            tutorial2::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::field::B8_1MembersCommon::M1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"M2"</b> field.
    /// @see @ref tutorial2::field::B8_1MembersCommon::M2Val
    class M2 : public
        comms::field::EnumValue<
            tutorial2::field::FieldBase<>,
            tutorial2::field::B8_1MembersCommon::M2Val,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base = 
            comms::field::EnumValue<
                tutorial2::field::FieldBase<>,
                tutorial2::field::B8_1MembersCommon::M2Val,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::field::B8_1MembersCommon::M2Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return tutorial2::field::B8_1MembersCommon::M2Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"M3"</b> field.
    struct M3 : public
        comms::field::String<
            tutorial2::field::FieldBase<>,
            typename TOpt::field::B8_1Members::M3,
            comms::option::def::SequenceFixedSize<3U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::field::B8_1MembersCommon::M3Common::name();
        }
        
    };
    
    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           M1,
           M2,
           M3
        >;
};

/// @brief Definition of <b>"B8_1"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = tutorial2::options::DefaultOptions, typename... TExtraOpts>
class B8_1 : public
    comms::field::Bundle<
        tutorial2::field::FieldBase<>,
        typename B8_1Members<TOpt>::All,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::Bundle<
            tutorial2::field::FieldBase<>,
            typename B8_1Members<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated access types and functions functions are:
    ///     @li @b Field_m1type and @b field_m1() access function -
    ///         for B8_1Members::M1 member field.
    ///     @li @b Field_m2type and @b field_m2() access function -
    ///         for B8_1Members::M2 member field.
    ///     @li @b Field_m3type and @b field_m3() access function -
    ///         for B8_1Members::M3 member field.
    COMMS_FIELD_MEMBERS_NAMES(
        m1,
        m2,
        m3
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return tutorial2::field::B8_1Common::name();
    }
    
};

} // namespace field

} // namespace tutorial2


