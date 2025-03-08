#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Adding many elements to increase capacity
    for (int i = 0; i < 1000; ++i) dq.push_back(i);

    std::cout << "Size before shrink: " << dq.size() << "\n";

    // Removing elements but capacity may still be large
    dq.resize(10);
    std::cout << "Size after resize: " << dq.size() << "\n";

    // Shrinking the capacity to fit the actual size
    dq.shrink_to_fit();
    std::cout << "Size after shrink_to_fit: " << dq.size() << "\n";

    return 0;
}
