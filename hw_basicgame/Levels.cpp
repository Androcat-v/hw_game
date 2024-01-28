#include "Levels.h"
#include "Enemy.h"
#include "Player.h"
#include "Readers.h"
#include <iostream>

bool Fight(const EnemyInfo& enemyInfo)
{
    int enemyHP = enemyInfo.health;
    int hp = pHealth;
    while (enemyHP > 0) {
        if (hp <= 0) {
            std::cout << "You died. Game over" << std::endl;
            return false;
        }
        std::cout << "Choose your attack!" << std::endl;
        std::size_t a = ReadSizeT();
        int attackDamage = GetAttackDamage(static_cast<TypeOfAttack>(a));
        enemyHP -= attackDamage;
        hp -= enemyInfo.attackDamage - pArmor;
        std::cout << "You dealt damage to the enemy = " << attackDamage << ". Remaining health = " << enemyHP << std::endl;
        std::cout << "The enemy hit you! Your health is: " << hp << std::endl;
    }
    std::cout << "Enemy defeated! Congrats!" << std::endl << std::endl;
    return true;
}

void StartGame()
{

    ShowPlayerInfo();
    for (levelNumber; levelNumber < maxLevelNumber + 1; levelNumber++) {
        EnemyInfo enemy = GetEnemy(levelNumber);
        ShowEnemyInfo(enemy);
        if (!Fight(enemy)) { return; }
    }
    std::cout << "Congrats you were strong enough to defeat all enemies!" << std::endl;
}
