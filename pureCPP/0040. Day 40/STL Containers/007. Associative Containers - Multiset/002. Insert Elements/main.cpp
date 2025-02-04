#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms;

    ms.insert(10);
    ms.insert(20);
    ms.insert(10); // Duplicate allowed

    for (int i : ms) {
        std::cout << i << " ";
    }

    return 0;
}
