#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

    std::ranges::sort(people, {}, &Person::age);

    for (const auto& p : people)
        std::cout << p.name << " (" << p.age << ")\n";

    return 0;
}
