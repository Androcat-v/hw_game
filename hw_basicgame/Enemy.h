#pragma once
#include <iostream>

enum class Enemy
{
    Murgul = 1,
    Murloc,
    SnapDragon,
    Naga
};
std::string ToStringEnemy(Enemy enemyEnum);
struct EnemyInfo
{
    int health;
    int attackDamage;
    Enemy enemyName;
};
EnemyInfo CreateEnemy(Enemy enemy);
EnemyInfo GetEnemy(int levelNumber);
void ShowEnemyInfo(const EnemyInfo& enemyInfo);

