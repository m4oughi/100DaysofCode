#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 20, 20, 30, 30, 30};

    std::cout << "Count of 30: " << mset.count(30) << std::endl;

    std::cout << "Multiset elements: ";
    for (int num : mset) {
        std::cout << num << " ";
    }
    return 0;
}
