#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people = {{"Alice", 25}, {"Bob", 17}, {"Charlie", 30}, {"Daisy", 17}};

    int minors = std::count_if(people.begin(), people.end(), [](const Person& p) {
        return p.age < 18;
    });

    std::cout << "There are " << minors << " minors in the list." << std::endl;

    return 0;
}
