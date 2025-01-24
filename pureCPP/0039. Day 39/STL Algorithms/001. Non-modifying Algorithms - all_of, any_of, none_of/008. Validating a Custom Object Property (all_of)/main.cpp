#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    bool allAdults = std::all_of(people.begin(), people.end(), [](const Person& p) {
        return p.age >= 18;
    });

    std::cout << (allAdults ? "All are adults." : "Some are not adults.") << std::endl;

    return 0;
}
