#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    try {
        if (q.empty()) {
            throw std::runtime_error("Attempted to access front of an empty queue!");
        }
        std::cout << "Front: " << q.front() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
