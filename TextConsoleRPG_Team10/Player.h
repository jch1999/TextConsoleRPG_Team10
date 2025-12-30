#pragma once
#include "ICharacter.h"
#include "IMonster.h"

class Player : public ICharacter {
public:
    Player(string name)
        : ICharacter(name, 100, 10, 5, 5) {
        // 플레이어 특유의 초기화가 필요한 경우 여기서 수행
    }

    void attackTarget(IMonster& monster) override;
    void takeDamage(int damage) override;
    void levelUp() override;
    void addGold(int amount) override;
    bool spendGold(int amount) override;
    void useItem(int index) override;

    float getInitiativeChance() override;
    float getCriticalChance() override;
};