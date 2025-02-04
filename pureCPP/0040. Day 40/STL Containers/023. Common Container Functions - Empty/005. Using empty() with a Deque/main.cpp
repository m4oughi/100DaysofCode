#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    // Check if the deque is empty
    if (myDeque.empty()) {
        std::cout << "Deque is empty." << std::endl;  // Output: Deque is empty.
    } else {
        std::cout << "Deque is not empty." << std::endl;
    }

    return 0;
}
