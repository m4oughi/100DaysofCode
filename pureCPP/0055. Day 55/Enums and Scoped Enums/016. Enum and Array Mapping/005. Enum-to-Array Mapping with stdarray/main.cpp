#include <iostream>
#include <array>

enum Animal { Cat, Dog, Bird, Count };

std::array<int, Count> animalLifespans = { 15, 13, 5 };

int main() {
    Animal a = Dog;
    std::cout << "Dog's lifespan: " << animalLifespans[a] << " years.\n";
}
