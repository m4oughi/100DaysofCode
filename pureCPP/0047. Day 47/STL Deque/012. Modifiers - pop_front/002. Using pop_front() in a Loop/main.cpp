#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::cout << "Deque elements: ";
    for (int num : dq) std::cout << num << " ";

    std::cout << "\nRemoving elements one by one...\n";
    while (!dq.empty()) {
        dq.pop_front();
        
        std::cout << "Deque now: ";
        for (int num : dq) std::cout << num << " ";
        std::cout << "\n";
    }

    return 0;
}
