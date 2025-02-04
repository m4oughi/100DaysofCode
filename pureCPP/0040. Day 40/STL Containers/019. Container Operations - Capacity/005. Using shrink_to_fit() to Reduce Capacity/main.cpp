#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    vec.reserve(10);
    std::cout << "Capacity before shrink: " << vec.capacity() << "\n"; // 10 or more

    vec.resize(3);
    std::cout << "Capacity after resizing to 3: " << vec.capacity() << "\n"; // 10 or more

    vec.shrink_to_fit();
    std::cout << "Capacity after shrink_to_fit: " << vec.capacity() << "\n"; // 3

    return 0;
}
