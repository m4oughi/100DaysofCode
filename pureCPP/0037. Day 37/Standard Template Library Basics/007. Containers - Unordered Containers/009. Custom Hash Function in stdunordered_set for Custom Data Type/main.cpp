#include <iostream>
#include <unordered_set>
#include <string>

struct Person {
    std::string firstName;
    std::string lastName;

    bool operator==(const Person &other) const {
        return firstName == other.firstName && lastName == other.lastName;
    }
};

// Custom hash function for Person
struct PersonHash {
    std::size_t operator()(const Person &p) const {
        return std::hash<std::string>()(p.firstName) ^ (std::hash<std::string>()(p.lastName) << 1);
    }
};

int main() {
    std::unordered_set<Person, PersonHash> people = {{"John", "Doe"}, {"Jane", "Smith"}};

    for (const auto &p : people) {
        std::cout << p.firstName << " " << p.lastName << std::endl;
    }
    return 0;
}
