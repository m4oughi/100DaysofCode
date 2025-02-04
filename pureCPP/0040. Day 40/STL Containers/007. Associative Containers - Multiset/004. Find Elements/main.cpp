#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {10, 20, 20, 30};

    auto it = ms.find(20);
    if (it != ms.end()) {
        std::cout << "Element 20 found.\n";
    } else {
        std::cout << "Element not found.\n";
    }

    return 0;
}
