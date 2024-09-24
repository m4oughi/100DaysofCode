#include <iostream>
#include <array>
#include <algorithm>  // For std::swap

struct Person {
    std::string name;
    int age;
};

int main() {
    std::array<Person, 2> arr1 = {{{"Alice", 30}, {"Bob", 25}}};
    std::array<Person, 2> arr2 = {{{"Charlie", 35}, {"Diana", 40}}};

    std::swap(arr1, arr2);  // Swap contents of arr1 and arr2 using std::swap

    for (const auto& person : arr1) {
        std::cout << person.name << " " << person.age << " ";  // Output: Charlie 35 Diana 40
    }
    std::cout << std::endl;

    for (const auto& person : arr2) {
        std::cout << person.name << " " << person.age << " ";  // Output: Alice 30 Bob 25
    }
    std::cout << std::endl;

    return 0;

    return 0;
}