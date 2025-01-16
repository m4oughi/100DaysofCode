#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {10, 20, 30, 40};

    std::cout << "First element: " << numbers.front() << "\n";
    std::cout << "Last element: " << numbers.back() << "\n";
    std::cout << "Element at index 2: " << numbers.at(2) << "\n"; // Safer access than operator[]

    return 0;
}
