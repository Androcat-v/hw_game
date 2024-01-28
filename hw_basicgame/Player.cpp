#include "Player.h"
#include <iostream>

std::string ToStringAttack(TypeOfAttack attackEnum)
{
    switch (attackEnum) {
    case TypeOfAttack::MeatHook:
        return "MeatHook";
    case TypeOfAttack::Rot:
        return "Rot";
    case TypeOfAttack::Dismember:
        return "Dismember";
    default:
        return "";
    }
}
int GetAttackDamage(TypeOfAttack attack)
{

    switch (attack) {
    case TypeOfAttack::MeatHook:
        return 220;
    case TypeOfAttack::Rot:
        return 90;
    case TypeOfAttack::Dismember:
        return 500;
    default:
        return 0;
    }
}
void ShowPlayerInfo()
{
    std::cout << "Your health is " << pHealth << std::endl
        << "Your armor is " << pArmor << std::endl
        << "Your attacks are:" << std::endl
        << ToStringAttack(static_cast<TypeOfAttack>(1)) << " -- It's attack is " << GetAttackDamage(static_cast<TypeOfAttack>(1)) << std::endl
        << ToStringAttack(static_cast<TypeOfAttack>(2)) << " -- It's attack is " << GetAttackDamage(static_cast<TypeOfAttack>(2)) << std::endl
        << ToStringAttack(static_cast<TypeOfAttack>(3)) << " -- It's attack is " << GetAttackDamage(static_cast<TypeOfAttack>(3)) << std::endl << std::endl;
}

