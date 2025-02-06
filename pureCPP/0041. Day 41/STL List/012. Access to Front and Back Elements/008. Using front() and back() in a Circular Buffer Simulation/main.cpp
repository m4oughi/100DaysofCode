#include <iostream>
#include <list>

int main() {
    std::list<int> buffer = {1, 2, 3, 4, 5};

    for (int i = 0; i < 3; ++i) {
        buffer.push_back(buffer.front()); // Move front to back
        buffer.pop_front();
    }

    std::cout << "Circular buffer after rotations: ";
    for (int num : buffer) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
