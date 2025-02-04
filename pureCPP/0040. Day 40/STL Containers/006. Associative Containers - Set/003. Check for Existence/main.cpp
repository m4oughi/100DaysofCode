#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40};

    if (s.find(20) != s.end()) {
        std::cout << "Element 20 found in the set.\n";
    } else {
        std::cout << "Element not found.\n";
    }

    return 0;
}
