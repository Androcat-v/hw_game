#pragma once
#include <iostream>

static int pHealth = 1000;
static int pArmor = 10;
enum class TypeOfAttack
{
    MeatHook = 1,
    Rot,
    Dismember
};
std::string ToStringAttack(TypeOfAttack attackEnum);
int GetAttackDamage(TypeOfAttack attack);
void ShowPlayerInfo();