#include <iostream>

class Enemy { //the Enemy class is called an abstract class because it has a pure virtual function
public:
    virtual void attack() = 0; // pure virtual function
};

class Ninja : public Enemy {
public:
    void attack() {
        std::cout << "Ninja attack!" << std::endl;
    };
};

class Monster : public Enemy {

    void attack() {
        std::cout << "Monster attack!" << std::endl;
    };

};

int main()
{
    Ninja n;
    Monster m;
    Enemy* enemy1 = &n;
    Enemy* enemy2 = &m;
    
    enemy1->attack();
    enemy2->attack();
}
