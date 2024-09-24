#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    numbers.push_back(1);
    std::cout << "Capacity after first push: " << numbers.capacity() << std::endl;

    int initial_capacity = numbers.capacity();
    while (numbers.capacity() == initial_capacity) {
        numbers.push_back(1);
    }

    std::cout << "Capacity after exceeding initial capacity: " << numbers.capacity() << std::endl;

    return 0;
}
