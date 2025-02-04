#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    std::cout << "Initial capacity: " << vec.capacity() << "\n"; // 0

    // Reserve space for 10 elements
    vec.reserve(10);
    std::cout << "Capacity after reserve(10): " << vec.capacity() << "\n"; // 10

    return 0;
}
