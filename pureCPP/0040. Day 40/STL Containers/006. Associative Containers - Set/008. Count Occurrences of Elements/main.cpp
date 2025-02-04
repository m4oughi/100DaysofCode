#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30};

    if (s.count(20)) {
        std::cout << "Element 20 exists.\n";
    } else {
        std::cout << "Element does not exist.\n";
    }

    return 0;
}
