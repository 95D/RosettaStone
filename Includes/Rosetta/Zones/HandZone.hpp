// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ROSETTASTONE_HAND_ZONE_HPP
#define ROSETTASTONE_HAND_ZONE_HPP

#include <Rosetta/Models/Entity.hpp>
#include <Rosetta/Zones/Zone.hpp>

namespace RosettaStone
{
//!
//! \brief HandZone class.
//!
//! This class is where each player keeps the cards currently available to
//! them. The player can see their hand face-up at the bottom of the screen,
//! while the opponent's hand is shown face-down at the top of the screen.
//!
class HandZone : public PositioningZone<Entity>
{
 public:
    //! Default constructor.
    explicit HandZone(Player* player);

    //! Adds the specified entity into this zone, at the given position.
    //! \param entity The entity.
    //! \param zonePos The zone position.
    void Add(Entity& entity, int zonePos = -1) override;

    //! Removes the specified entity from this zone.
    //! \param entity The entity.
    //! \return The entity.
    Entity& Remove(Entity& entity) override;
};
}  // namespace RosettaStone

#endif  // ROSETTASTONE_HAND_ZONE_HPP
