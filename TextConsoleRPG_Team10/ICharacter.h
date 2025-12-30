#pragma once
class IMonster;
class InventoryManager;

// Character Interface
class ICharacter {
protected:
    string _name;
    int _level;
    int _exp;
    int _gold;
    int _hp;
    int _maxHp;
    int _attack;
    int _agility;
    int _luck;
    // Inventory _inventory; // Inventory 클래스 정의 필요

public:
    // 생성자
    ICharacter(string name, int hp, int attack, int agility, int luck)
        : name(_name), level(1), exp(0), gold(0), hp(_hp), maxHp(hp),
        attack(_attack), agility(_agility), luck(_luck) {
    }

    // 가상 소멸자
    virtual ~ICharacter() {}

    // 가상 함수
    virtual void attackTarget(IMonster& monster) = 0;
    virtual void takeDamage(int damage);
    virtual void levelUp() = 0;
    virtual void addGold(int amount);
    virtual bool spendGold(int amount);
    virtual void useItem(int index);

    // 수치 계산용 함수
    virtual float getInitiativeChance();
    virtual float getCriticalChance();

    // Getter
    string getName() const { return _name; }
    int getHp() const { return _hp; }
};