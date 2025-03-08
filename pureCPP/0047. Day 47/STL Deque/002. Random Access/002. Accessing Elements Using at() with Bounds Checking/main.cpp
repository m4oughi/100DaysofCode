#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {5, 15, 25, 35};

    try {
        std::cout << "Element at index 2: " << dq.at(2) << "\n";
        std::cout << "Trying to access out-of-bounds index...\n";
        std::cout << dq.at(5); // This will throw an exception
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}
