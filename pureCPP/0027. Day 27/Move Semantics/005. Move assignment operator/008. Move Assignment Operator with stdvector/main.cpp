#include <iostream>
#include <vector>

class MyClass {
public:
    std::vector<int> data;

    MyClass(const std::vector<int>& vec) : data(vec) {}

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            data = std::move(other.data);  // Transfer ownership of vector
            std::cout << "Move assignment with std::vector called" << std::endl;
        }
        return *this;
    }
};

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};
    MyClass obj1(vec1);
    MyClass obj2(vec2);
    obj2 = std::move(obj1);  // Move assignment transfers vector ownership
}
