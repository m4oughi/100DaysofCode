#include <iostream>
#include <queue>

int main() {
    std::queue<int> buffer;
    const int maxSize = 5;

    // Enqueue initial elements
    for (int i = 1; i <= maxSize; ++i) {
        buffer.push(i);
    }

    std::cout << "Initial last element: " << buffer.back() << std::endl;  // 5

    // Simulating cyclic behavior
    buffer.pop();  // Remove front
    buffer.push(6);  // Add new element

    std::cout << "New last element: " << buffer.back() << std::endl;  // 6

    return 0;
}
