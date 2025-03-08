#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq1 = {"apple", "banana"};
    std::deque<std::string> dq2 = {"apple", "grape"};

    std::cout << std::boolalpha;

    std::cout << "dq1 < dq2: " << (dq1 < dq2) << "\n";   // true ("banana" < "grape")
    std::cout << "dq1 > dq2: " << (dq1 > dq2) << "\n";   // false
    std::cout << "dq1 == dq2: " << (dq1 == dq2) << "\n"; // false

    return 0;
}
