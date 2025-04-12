#include <iostream>
#include <string>

enum Skill { Fireball, Heal, IceBlast, Count };

const std::string skillNames[Count] = { "Fireball", "Heal", "IceBlast" };

Skill getSkillByIndex(int index) {
    if (index >= 0 && index < Count)
        return static_cast<Skill>(index);
    throw std::out_of_range("Invalid index");
}

int main() {
    int index = 2;
    Skill s = getSkillByIndex(index);
    std::cout << "Selected skill: " << skillNames[s] << "\n";
}
