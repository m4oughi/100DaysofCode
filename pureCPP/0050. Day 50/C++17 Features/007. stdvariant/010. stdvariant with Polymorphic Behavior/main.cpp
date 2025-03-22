#include <iostream>
#include <variant>

struct Dog { void speak() { std::cout << "Woof!\n"; } };
struct Cat { void speak() { std::cout << "Meow!\n"; } };

using Animal = std::variant<Dog, Cat>;

void makeSound(const Animal& animal) {
    std::visit([](const auto& pet) { pet.speak(); }, animal);
}

int main() {
    Animal pet1 = Dog{};
    Animal pet2 = Cat{};

    makeSound(pet1);  // Output: Woof!
    makeSound(pet2);  // Output: Meow!

    return 0;
}
