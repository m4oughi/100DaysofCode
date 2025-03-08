#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq1 = {1, 2, 3};
    std::deque<int> dq2 = {1, 2, 4};
    std::deque<int> dq3 = {1, 2, 3};

    std::cout << std::boolalpha;

    std::cout << "dq1 < dq2: " << (dq1 < dq2) << "\n";   // true (3 < 4)
    std::cout << "dq1 > dq2: " << (dq1 > dq2) << "\n";   // false
    std::cout << "dq1 <= dq3: " << (dq1 <= dq3) << "\n"; // true (equal)
    std::cout << "dq1 >= dq3: " << (dq1 >= dq3) << "\n"; // true (equal)

    return 0;
}
