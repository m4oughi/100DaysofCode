#include <iostream>
#include <deque>

int main() {
    std::deque<int> buffer = {10, 20, 30, 40, 50};
    int maxSize = 5;

    // Insert a new element
    buffer.push_back(60);

    // Ensure the size remains within maxSize
    if (buffer.size() > maxSize) {
        buffer.erase(buffer.begin()); // Remove the oldest element
    }

    std::cout << "Buffer after adding 60 and erasing the oldest: ";
    for (int num : buffer) std::cout << num << " ";

    return 0;
}
