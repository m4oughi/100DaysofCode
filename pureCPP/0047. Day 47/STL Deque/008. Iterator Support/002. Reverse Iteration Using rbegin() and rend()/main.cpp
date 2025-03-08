#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::cout << "Deque in reverse order: ";
    for (auto rit = dq.rbegin(); rit != dq.rend(); ++rit)
        std::cout << *rit << " ";

    return 0;
}
