#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 20, 20, 30, 30, 30};

    std::cout << "Multiset elements: ";
    for (auto it = mset.begin(); it != mset.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
