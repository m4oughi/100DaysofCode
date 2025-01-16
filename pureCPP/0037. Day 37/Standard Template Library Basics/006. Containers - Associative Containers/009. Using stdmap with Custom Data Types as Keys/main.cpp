#include <iostream>
#include <map>
#include <string>

struct Person {
    std::string firstName;
    std::string lastName;

    bool operator<(const Person &other) const {
        return lastName < other.lastName || (lastName == other.lastName && firstName < other.firstName);
    }
};

int main() {
    std::map<Person, int> age = {{{"John", "Doe"}, 30}, {{"Jane", "Smith"}, 25}};

    for (const auto &entry : age) {
        std::cout << entry.first.firstName << " " << entry.first.lastName << ": " << entry.second << std::endl;
    }
    return 0;
}
