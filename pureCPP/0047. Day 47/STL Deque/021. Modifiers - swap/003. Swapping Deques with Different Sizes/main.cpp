#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq1 = {1, 2, 3, 4, 5};
    std::deque<int> dq2 = {10, 20};

    dq1.swap(dq2);

    std::cout << "dq1 size after swap: " << dq1.size() << "\n";
    std::cout << "dq2 size after swap: " << dq2.size() << "\n";

    return 0;
}
