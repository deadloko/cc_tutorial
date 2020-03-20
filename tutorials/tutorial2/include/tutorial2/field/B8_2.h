// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains definition of <b>"B8_2"</b> field.

#pragma once

#include <cmath>
#include <cstdint>
#include <limits>
#include <tuple>
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/FloatValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "tutorial2/field/B8_2Common.h"
#include "tutorial2/field/FieldBase.h"
#include "tutorial2/options/DefaultOptions.h"

namespace tutorial2
{

namespace field
{

/// @brief Scope for all the member fields of @ref B8_2 bundle.
/// @tparam TOpt Protocol options.
template <typename TOpt = tutorial2::options::DefaultOptions>
struct B8_2Members
{
    /// @brief Definition of <b>"M1"</b> field.
    class M1 : public
        comms::field::FloatValue<
            tutorial2::field::FieldBase<>,
            float
        >
    {
        using Base = 
            comms::field::FloatValue<
                tutorial2::field::FieldBase<>,
                float
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Default constructor.
        M1()
        {
            Base::value() = std::numeric_limits<ValueType>::quiet_NaN();
        }
        
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::field::B8_2MembersCommon::M1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"M2"</b> field.
    class M2 : public
        comms::field::BitmaskValue<
            tutorial2::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xDEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                tutorial2::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xDEU, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_SomeBit.
        ///      @li @b BitIdx_SomeOtherbit.
        COMMS_BITMASK_BITS(
            SomeBit=0,
            SomeOtherbit=5
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_SomeBit() and @b setBitValue_SomeBit().
        ///      @li @b getBitValue_SomeOtherbit() and @b setBitValue_SomeOtherbit().
        COMMS_BITMASK_BITS_ACCESS(
            SomeBit,
            SomeOtherbit
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::field::B8_2MembersCommon::M2Common::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                tutorial2::field::B8_2MembersCommon::M2Common::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref M3 list.
    struct M3Members
    {
        /// @brief Definition of <b>"Length"</b> field.
        struct Length : public
            comms::field::IntValue<
                tutorial2::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return tutorial2::field::B8_2MembersCommon::M3MembersCommon::LengthCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"M3"</b> field.
    struct M3 : public
        comms::field::ArrayList<
            tutorial2::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::field::B8_2Members::M3,
            comms::option::def::SequenceSerLengthFieldPrefix<typename M3Members::Length>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return tutorial2::field::B8_2MembersCommon::M3Common::name();
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

/// @brief Definition of <b>"B8_2"</b> field.
/// @details
///     Some Field Description
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = tutorial2::options::DefaultOptions, typename... TExtraOpts>
class B8_2 : public
    comms::field::Bundle<
        tutorial2::field::FieldBase<>,
        typename B8_2Members<TOpt>::All,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::Bundle<
            tutorial2::field::FieldBase<>,
            typename B8_2Members<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///     @li @b Field_m1 @b field_m1() -
    ///         for B8_2Members::M1 member field.
    ///     @li @b Field_m2 @b field_m2() -
    ///         for B8_2Members::M2 member field.
    ///     @li @b Field_m3 @b field_m3() -
    ///         for B8_2Members::M3 member field.
    COMMS_FIELD_MEMBERS_NAMES(
        m1,
        m2,
        m3
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return tutorial2::field::B8_2Common::name();
    }
    
};

} // namespace field

} // namespace tutorial2

