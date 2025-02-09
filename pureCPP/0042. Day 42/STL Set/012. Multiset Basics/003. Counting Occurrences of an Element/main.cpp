#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {5, 10, 10, 10, 20, 30};

    std::cout << "Count of 10: " << ms.count(10) << std::endl;
    std::cout << "Count of 5: " << ms.count(5) << std::endl;
    std::cout << "Count of 15: " << ms.count(15) << std::endl;  // Not present

    return 0;
}
