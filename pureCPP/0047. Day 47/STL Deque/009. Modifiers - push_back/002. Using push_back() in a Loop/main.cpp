#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Inserting elements using a loop
    for (int i = 1; i <= 5; ++i)
        dq.push_back(i * 10);

    std::cout << "Deque after inserting in a loop: ";
    for (int num : dq)
        std::cout << num << " ";

    return 0;
}
