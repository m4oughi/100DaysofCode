#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset;

    mset.insert(10);
    mset.insert(10);  // Allows duplicate values
    mset.insert(20);

    std::cout << "Multiset elements: ";
    for (int num : mset) {
        std::cout << num << " ";
    }
    return 0;
}
