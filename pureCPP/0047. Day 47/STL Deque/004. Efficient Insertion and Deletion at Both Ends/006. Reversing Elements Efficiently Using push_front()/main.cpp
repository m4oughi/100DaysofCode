#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Insert elements in reverse order
    for (int i = 1; i <= 5; ++i)
        dq.push_front(i);

    std::cout << "Reversed order deque: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
