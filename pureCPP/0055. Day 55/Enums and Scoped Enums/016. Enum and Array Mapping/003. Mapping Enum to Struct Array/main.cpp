#include <iostream>
#include <string>

enum Character { Warrior, Mage, Archer, Count };

struct Stats {
    int hp;
    int mana;
    std::string weapon;
};

Stats characterStats[Count] = {
    { 150, 50, "Sword" },   // Warrior
    { 80, 200, "Staff" },   // Mage
    { 100, 80, "Bow" }      // Archer
};

int main() {
    Character c = Mage;
    std::cout << "Mage uses " << characterStats[c].weapon
              << " with " << characterStats[c].mana << " mana.\n";
}
