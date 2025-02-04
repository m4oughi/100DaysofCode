#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque = {1, 2, 3, 4};

    // Insert 5 at the second position
    myDeque.insert(myDeque.begin() + 1, 5);

    // Output the deque after insertion
    std::cout << "Deque after insert: ";
    for (int val : myDeque) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
