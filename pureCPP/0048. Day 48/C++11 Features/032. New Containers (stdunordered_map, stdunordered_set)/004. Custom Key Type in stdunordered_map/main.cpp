#include <iostream>
#include <unordered_map>

struct Person {
    std::string name;
    int age;

    bool operator==(const Person &other) const {
        return name == other.name && age == other.age;
    }
};

// Custom hash function
struct PersonHash {
    std::size_t operator()(const Person &p) const {
        return std::hash<std::string>()(p.name) ^ std::hash<int>()(p.age);
    }
};

int main() {
    std::unordered_map<Person, int, PersonHash> person_map;

    person_map[{"Alice", 25}] = 100;
    person_map[{"Bob", 30}] = 200;

    for (const auto &p : person_map) {
        std::cout << p.first.name << ", " << p.first.age << ": " << p.second << "\n";
    }

    return 0;
}
