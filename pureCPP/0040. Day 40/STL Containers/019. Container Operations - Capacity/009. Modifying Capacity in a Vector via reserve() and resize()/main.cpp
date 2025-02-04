#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    vec.reserve(8); // Reserve space for 8 elements
    std::cout << "Capacity after reserve(8): " << vec.capacity() << "\n"; // 8 or more

    vec.resize(5, 10); // Resize the vector to 5 elements, initialize new elements with 10
    std::cout << "Size after resize(5): " << vec.size() << "\n"; // 5

    vec.resize(10, 20); // Resize to 10, initialize new elements with 20
    std::cout << "Size after resize(10): " << vec.size() << "\n"; // 10

    return 0;
}
