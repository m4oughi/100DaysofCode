#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {5, 15, 25, 35};

    std::cout << "Element at index 2: " << dq.at(2) << "\n";

    try {
        std::cout << "Trying to access index 10...\n";
        std::cout << dq.at(10) << "\n"; // This will throw an exception
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}
