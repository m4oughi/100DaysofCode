#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque = {1, 2, 3, 4};

    std::cout << "Before clear, size: " << myDeque.size() << std::endl;

    // Clear the deque
    myDeque.clear();

    std::cout << "After clear, size: " << myDeque.size() << std::endl;  // Output: After clear, size: 0

    return 0;
}
