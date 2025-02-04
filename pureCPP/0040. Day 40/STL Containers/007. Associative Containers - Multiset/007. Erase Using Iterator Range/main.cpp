#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {10, 20, 20, 30, 40};

    ms.erase(ms.find(20), ms.upper_bound(30)); // Erase from 20 to 30

    for (int i : ms) {
        std::cout << i << " ";
    }

    return 0;
}
