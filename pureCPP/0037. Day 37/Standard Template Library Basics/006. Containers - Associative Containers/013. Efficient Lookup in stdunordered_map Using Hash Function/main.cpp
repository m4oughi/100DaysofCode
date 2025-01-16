#include <iostream>
#include <unordered_map>
#include <string>

struct Person {
    std::string firstName;
    std::string lastName;

    bool operator==(const Person &other) const {
        return firstName == other.firstName && lastName == other.lastName;
    }
};

// Custom hash function
struct PersonHash {
    std::size_t operator()(const Person &p) const {
        return std::hash<std::string>()(p.firstName) ^ (std::hash<std::string>()(p.lastName) << 1);
    }
};

int main() {
    std::unordered_map<Person, int, PersonHash> age = {{{"John", "Doe"}, 30}, {{"Jane", "Smith"}, 25}};

    for (const auto &entry : age) {
        std::cout << entry.first.firstName << " " << entry.first.lastName << ": " << entry.second << std::endl;
    }
    return 0;
}
