#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 10, 20, 20, 30, 30, 30};

    std::cout << "Multiset size (includes duplicates): " << mset.size() << std::endl;

    return 0;
}
