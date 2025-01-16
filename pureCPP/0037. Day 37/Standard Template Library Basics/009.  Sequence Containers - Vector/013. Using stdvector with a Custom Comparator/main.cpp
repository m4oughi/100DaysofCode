#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;
};

bool compareByAge(const Person &a, const Person &b) {
    return a.age < b.age;
}

int main() {
    std::vector<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};
    
    std::sort(people.begin(), people.end(), compareByAge);

    for (const auto &p : people) {
        std::cout << p.name << ": " << p.age << "\n";
    }
    return 0;
}
