#include <iostream>
#include <deque>

int main() {
    std::deque<int> buffer;
    int maxSize = 5;

    for (int i = 1; i <= 7; ++i) {
        if (buffer.size() >= maxSize) {
            buffer.pop_front();  // Remove oldest element
        }
        buffer.insert(buffer.end(), i * 10); // Insert new element

        std::cout << "Buffer: ";
        for (int num : buffer) std::cout << num << " ";
        std::cout << "\n";
    }

    return 0;
}
