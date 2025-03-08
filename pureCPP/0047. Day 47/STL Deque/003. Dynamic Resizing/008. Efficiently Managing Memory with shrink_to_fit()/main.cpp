#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq(10, 5); // Create deque with 10 elements

    std::cout << "Size before shrinking: " << dq.size() << "\n";

    dq.resize(5); // Reduce size
    dq.shrink_to_fit(); // Release unused memory

    std::cout << "Size after shrinking: " << dq.size() << "\n";

    return 0;
}
