#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;
    
    for (int i = 1; i <= 5; ++i) {
        dq.push_front(i);
    }

    std::cout << "Deque elements: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
