#include <iostream>
#include <deque>

int main() {
    std::deque<int> buffer;
    int maxSize = 5;

    // Simulate adding elements to a circular buffer
    for (int i = 1; i <= 10; ++i) {
        if (buffer.size() == maxSize) {
            buffer.pop_front(); // Remove the oldest element if full
        }
        buffer.push_back(i); // Add new element
    }

    for (int num : buffer) {
        std::cout << num << " ";
    }
    return 0;
}
