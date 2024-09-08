#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    std::cout << "Initial size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

    for (int i = 0; i < 10; ++i) {
        numbers.push_back(i);
        std::cout << "Size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    }

    return 0;
}
