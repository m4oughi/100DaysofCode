#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 20, 20, 30, 30, 30};

    mset.erase(30); // Removes all occurrences of 30

    std::cout << "Multiset after removing 30: ";
    for (int num : mset) {
        std::cout << num << " ";
    }
    return 0;
}
