#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40};

    s.erase(20); // Remove element 20

    for (int i : s) {
        std::cout << i << " ";
    }

    return 0;
}
