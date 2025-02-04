#include <iostream>
#include <deque>

int main() {
    std::deque<int> buffer;
    int max_size = 5;

    // Add elements in a circular fashion
    for (int i = 1; i <= 10; ++i) {
        if (buffer.size() == max_size) {
            buffer.pop_front(); // Remove the oldest element
        }
        buffer.push_back(i); // Add the newest element
    }

    for (int i : buffer) std::cout << i << " ";

    return 0;
}
