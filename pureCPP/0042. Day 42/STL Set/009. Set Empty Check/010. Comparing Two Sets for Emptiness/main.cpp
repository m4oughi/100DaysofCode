#include <iostream>
#include <set>

int main() {
    std::set<int> set1;
    std::set<int> set2 = {1, 2, 3};

    if (set1.empty() && !set2.empty()) {
        std::cout << "set1 is empty, but set2 is not." << std::endl;
    }

    return 0;
}
