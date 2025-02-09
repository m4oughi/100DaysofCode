#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {1, 2, 2, 3, 4, 5};

    auto it = ms.find(2);
    if (it != ms.end()) {
        std::cout << "Element 2 found in multiset." << std::endl;
    } else {
        std::cout << "Element 2 not found." << std::endl;
    }

    return 0;
}
