#include <iostream>
#include <array>
#include <string>

struct Person {
    std::string name;
    int age;

    bool operator<(const Person& other) const {
        return age < other.age;
    }
};

int main() {
    std::array<Person, 3> arr1 = {{{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}}};
    std::array<Person, 3> arr2 = {{{"Alice", 25}, {"Bob", 28}, {"Charlie", 35}}};

    if (arr1 > arr2) {
        std::cout << "arr1 is lexicographically greater than arr2." << std::endl;  // Output: arr1 is lexicographically greater than arr2.
    }

    return 0;
}