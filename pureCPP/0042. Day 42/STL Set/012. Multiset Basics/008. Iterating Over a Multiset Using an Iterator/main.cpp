#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {1, 2, 2, 3, 3, 3, 4};

    std::cout << "Multiset elements: ";
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
