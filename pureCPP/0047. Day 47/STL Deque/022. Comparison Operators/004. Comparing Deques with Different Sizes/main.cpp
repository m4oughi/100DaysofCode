#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq1 = {1, 2, 3, 4};
    std::deque<int> dq2 = {1, 2, 3};

    std::cout << std::boolalpha;

    std::cout << "dq1 > dq2: " << (dq1 > dq2) << "\n";   // true (dq1 is longer)
    std::cout << "dq1 < dq2: " << (dq1 < dq2) << "\n";   // false
    std::cout << "dq1 != dq2: " << (dq1 != dq2) << "\n"; // true

    return 0;
}
