#include <iostream>
#include <queue>
#include <stdexcept>

int main() {
    try {
        std::queue<int> q;
        q.push(10);
        q.push(20);
        q.push(30);
        std::cout << "Queue size: " << q.size() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
