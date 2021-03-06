// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ROSETTASTONE_SETASIDE_ZONE_HPP
#define ROSETTASTONE_SETASIDE_ZONE_HPP

#include <Rosetta/Models/Entity.hpp>
#include <Rosetta/Zones/Zone.hpp>

namespace RosettaStone
{
//!
//! \brief SetasideZone class.
//!
//! The zone containing all entities that need to be chosen by the player.
//! Before an option set is created, it's entities are built and stored in the
//! this zone. The picked entity will move from that zone into the hand zone.
//! Unpicked entities will remain in the setaside zone.
//!
class SetasideZone : public UnlimitedZone
{
 public:
    //! Default constructor.
    explicit SetasideZone(Player* player);

    //! Returns The entity that has ID.
    //! \param id The ID of entity.
    //! \return The entity.
    Entity* GetEntity(int id);
};
}  // namespace RosettaStone

#endif  // ROSETTASTONE_SETASIDE_ZONE_HPP
