#include <iostream>
#include <compare>

struct Person {
    std::string name;
    int age;

    bool operator==(const Person& other) const {
        return age == other.age;  // Compare only age
    }

    std::strong_ordering operator<=>(const Person& other) const {
        return age <=> other.age; // Compare only age
    }
};

int main() {
    Person alice{"Alice", 25}, bob{"Bob", 30}, anotherAlice{"Alice", 25};

    std::cout << std::boolalpha;
    std::cout << (alice == anotherAlice) << "\n";  // true (age is same)
    std::cout << (alice < bob) << "\n";            // true (25 < 30)

    return 0;
}
