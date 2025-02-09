#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 20, 20, 30};

    std::cout << "Initially, empty: " << std::boolalpha << mset.empty() << std::endl;

    mset.clear();

    std::cout << "After clearing, empty: " << mset.empty() << std::endl;

    return 0;
}
