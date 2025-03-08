#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq1 = {1, 2, 3};
    std::deque<int> dq2 = {1, 2, 3};
    std::deque<int> dq3 = {4, 5, 6};

    std::cout << std::boolalpha;  // Print `true` or `false` instead of `1` or `0`

    std::cout << "dq1 == dq2: " << (dq1 == dq2) << "\n";  // true
    std::cout << "dq1 == dq3: " << (dq1 == dq3) << "\n";  // false
    std::cout << "dq1 != dq3: " << (dq1 != dq3) << "\n";  // true

    return 0;
}
