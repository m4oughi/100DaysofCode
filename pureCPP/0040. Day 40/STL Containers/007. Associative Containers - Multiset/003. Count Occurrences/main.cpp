#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {10, 20, 20, 30, 30, 30};

    std::cout << "Count of 20: " << ms.count(20) << "\n";
    std::cout << "Count of 30: " << ms.count(30) << "\n";

    return 0;
}
