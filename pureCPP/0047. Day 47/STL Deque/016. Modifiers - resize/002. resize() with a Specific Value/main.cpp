#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30};

    dq.resize(6, 100);  // Expanding deque, new elements initialized with 100

    std::cout << "Deque after resize(6, 100): ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
