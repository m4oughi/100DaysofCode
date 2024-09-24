#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    std::cout << "Initial size: " << numbers.size() << std::endl;
    std::cout << "Initial capacity: " << numbers.capacity() << std::endl;

    numbers.push_back(1);

    std::cout << "Size after one insertion: " << numbers.size() << std::endl;
    std::cout << "Capacity after one insertion: " << numbers.capacity() << std::endl;

    return 0;
}
