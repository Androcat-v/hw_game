#include "Enemy.h"
#include <iostream>
std::string ToStringEnemy(Enemy enemyEnum)
{
    switch (enemyEnum) {
    case Enemy::Murgul:
        return "Murgul";
    case Enemy::Murloc:
        return "Murloc";
    case Enemy::Naga:
        return "Naga";
    case Enemy::SnapDragon:
        return "SnapDragon";
    default:
        return "";
    }
}

EnemyInfo CreateEnemy(Enemy enemy)
{
    switch (enemy) {
    case Enemy::Murgul:
    {
        EnemyInfo Murgul{ 100, 75, enemy };
        return Murgul; 
    }
    case Enemy::Murloc:
    {
        EnemyInfo Murloc{ 150, 105, enemy };
        return Murloc; 
    }
    case Enemy::Naga:
    {
        EnemyInfo Naga{ 600, 250, enemy };
        return Naga; 
    }
    case Enemy::SnapDragon:
    {
        EnemyInfo SnapDragon{ 800, 200, enemy };
        return SnapDragon; 
    }
    default:
        return {};
    }
}

EnemyInfo GetEnemy(int levelNumber)
{
    return CreateEnemy(static_cast<Enemy>(levelNumber));
}

void ShowEnemyInfo(const EnemyInfo& enemyInfo) {

    std::cout << "Hello Traveler! Your enemy this level will be: " << ToStringEnemy(static_cast<Enemy>(enemyInfo.enemyName)) << std::endl
        << "Its damage is " << enemyInfo.attackDamage << std::endl
        << "Its health is " << enemyInfo.health << std::endl
        << "Good luck!" << std::endl;
}
