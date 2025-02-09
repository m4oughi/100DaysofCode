#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms;

    if (ms.empty()) {
        std::cout << "Multiset is empty." << std::endl;
    } else {
        std::cout << "Multiset is not empty." << std::endl;
    }

    ms.insert(5);

    if (!ms.empty()) {
        std::cout << "Multiset is no longer empty." << std::endl;
    }

    return 0;
}
