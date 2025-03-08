#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    std::cout << "Deque in reverse order: ";
    for (size_t i = dq.size(); i > 0; --i)
        std::cout << dq[i - 1] << " ";

    return 0;
}
