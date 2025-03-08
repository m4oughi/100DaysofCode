#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq = {"Apple", "Banana", "Cherry"};

    dq.clear();  // Remove all elements

    if (dq.empty()) {
        std::cout << "Deque is empty after clear().\n";
    } else {
        std::cout << "Deque still contains elements.\n";
    }

    return 0;
}
