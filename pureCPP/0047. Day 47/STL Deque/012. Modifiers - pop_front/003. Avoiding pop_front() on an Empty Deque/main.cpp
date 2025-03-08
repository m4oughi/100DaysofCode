#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;
    
    if (!dq.empty()) {
        dq.pop_front();
    } else {
        std::cout << "Deque is empty! Can't use pop_front().\n";
    }

    return 0;
}
