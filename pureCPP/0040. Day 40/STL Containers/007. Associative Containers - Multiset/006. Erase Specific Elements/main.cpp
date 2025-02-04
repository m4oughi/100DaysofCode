#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {10, 20, 20, 30};

    ms.erase(20); // Erases all occurrences of 20

    for (int i : ms) {
        std::cout << i << " ";
    }

    return 0;
}
