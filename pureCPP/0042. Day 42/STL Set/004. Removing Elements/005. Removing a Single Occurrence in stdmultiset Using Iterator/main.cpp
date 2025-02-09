#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 20, 20, 30, 30, 30};

    auto it = mset.find(30); // Finds first occurrence of 30
    if (it != mset.end()) {
        mset.erase(it); // Erases only one occurrence of 30
    }

    std::cout << "Multiset after removing one occurrence of 30: ";
    for (int num : mset) {
        std::cout << num << " ";
    }
    return 0;
}
