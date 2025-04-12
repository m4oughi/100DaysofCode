#include <iostream>

enum class Gender { Male, Female };

struct Person {
    std::string name;
    Gender gender;
};

int main() {
    Person p{"Alice", Gender::Female};  // Enum in aggregate initialization
    std::cout << p.name << " initialized with Gender enum.\n";
}
