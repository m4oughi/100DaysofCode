#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq(1000, 5); // 1000 elements, all initialized to 5
    std::cout << "Size before erase: " << dq.size() << std::endl;

    dq.erase(dq.begin(), dq.end() - 900); // Remove 900 elements

    std::cout << "Size after erase: " << dq.size() << std::endl;

    // Reduce memory footprint (C++23 feature)
    dq.shrink_to_fit();
    std::cout << "Size after shrink_to_fit: " << dq.size() << std::endl;

    return 0;
}
