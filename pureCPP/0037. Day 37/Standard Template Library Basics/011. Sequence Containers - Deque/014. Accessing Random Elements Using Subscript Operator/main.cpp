#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {10, 20, 30, 40};

    std::cout << "Element at index 0: " << numbers[0] << "\n";
    std::cout << "Element at index 2: " << numbers[2] << "\n";

    return 0;
}
