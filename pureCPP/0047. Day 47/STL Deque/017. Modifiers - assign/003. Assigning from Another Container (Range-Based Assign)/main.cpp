#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::vector<int> vec = {100, 200, 300, 400};
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::cout << "Before assign: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    dq.assign(vec.begin(), vec.end()); // Assign from vector

    std::cout << "After assign from vector: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
