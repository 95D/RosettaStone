// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <hspp/Models/Player.hpp>
#include <hspp/Models/Weapon.hpp>

namespace Hearthstonepp
{
Weapon::Weapon(Player& _owner, Card& _card) : Entity(_owner, _card)
{
    attack = _card.attack ? *_card.attack : 0;
    durability = _card.durability ? *_card.durability : 0;
}

void Weapon::Destroy()
{
    GetOwner().GetHero()->weapon = nullptr;
    delete this;
}
}  // namespace Hearthstonepp