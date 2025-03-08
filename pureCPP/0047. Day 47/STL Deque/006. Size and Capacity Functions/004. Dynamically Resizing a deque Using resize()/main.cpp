#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3};

    dq.resize(5, 100); // Expanding the deque, new elements initialized to 100

    std::cout << "Deque after resizing up: ";
    for (int num : dq) std::cout << num << " ";

    dq.resize(2); // Shrinking the deque

    std::cout << "\nDeque after resizing down: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
