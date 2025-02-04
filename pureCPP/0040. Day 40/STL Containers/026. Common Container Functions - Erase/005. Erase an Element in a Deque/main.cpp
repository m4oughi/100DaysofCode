#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque = {10, 20, 30, 40};

    // Erase the second element (20)
    myDeque.erase(myDeque.begin() + 1);

    // Output the deque after erase
    std::cout << "Deque after erase: ";
    for (int val : myDeque) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
