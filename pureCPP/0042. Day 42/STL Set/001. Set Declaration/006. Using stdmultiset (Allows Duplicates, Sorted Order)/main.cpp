#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 20, 10, 30, 20, 40};

    std::cout << "Multiset elements: ";
    for (int num : mset) {
        std::cout << num << " ";
    }
    return 0;
}
