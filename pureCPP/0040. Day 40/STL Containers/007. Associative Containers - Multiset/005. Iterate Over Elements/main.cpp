#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {10, 20, 20, 30};

    for (auto it = ms.begin(); it != ms.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
