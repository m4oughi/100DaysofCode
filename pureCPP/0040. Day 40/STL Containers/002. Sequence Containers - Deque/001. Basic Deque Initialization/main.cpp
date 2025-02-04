#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};
    for (int i : dq) {
        std::cout << i << " ";
    }
    return 0;
}
