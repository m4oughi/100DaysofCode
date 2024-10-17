#include <iostream>
#include <utility>
#include <vector>

class MyContainer {
    std::vector<int> data;
public:
    MyContainer(std::initializer_list<int> values) : data(values) {}

    // Move constructor (may throw)
    MyContainer(MyContainer&& other) noexcept(false) : data(std::move(other.data)) {
        std::cout << "Move constructor (may throw)\n";
    }

    // Copy constructor (noexcept)
    MyContainer(const MyContainer& other) noexcept : data(other.data) {
        std::cout << "Copy constructor (noexcept)\n";
    }

    void swap(MyContainer& other) noexcept {
        std::swap(data, other.data);
    }
};

int main() {
    MyContainer c1 = {1, 2, 3};
    MyContainer c2 = {4, 5, 6};
    
    std::cout << "Before std::move_if_noexcept:\n";
    
    std::swap(std::move_if_noexcept(c1), std::move_if_noexcept(c2));  // Uses move or copy depending on exception safety
    
    std::cout << "After std::move_if_noexcept:\n";
}
