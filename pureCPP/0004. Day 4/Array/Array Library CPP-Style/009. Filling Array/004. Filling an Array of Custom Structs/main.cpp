#include <iostream>
#include <array>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::array<Person, 2> arr;
    arr.fill({"John Doe", 30});  // Fill all elements with Person {"John Doe", 30}

    for (const auto& person : arr) {
        std::cout << person.name << " " << person.age << " ";  // Output: John Doe 30 John Doe 30
    }
    std::cout << std::endl;

    return 0;
}