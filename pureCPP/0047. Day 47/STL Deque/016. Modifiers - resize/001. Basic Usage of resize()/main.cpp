#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3};

    std::cout << "Original deque: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    dq.resize(5);  // Increase size, new elements will be default-initialized (0)
    std::cout << "After increasing size: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    dq.resize(2);  // Decrease size, extra elements are removed
    std::cout << "After decreasing size: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
