#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 20, 20, 30, 30, 30};

    int key = 30;
    std::cout << "Count of " << key << ": " << mset.count(key) << std::endl;
    return 0;
}
