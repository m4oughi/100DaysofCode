#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {1, 2, 2, 3, 4, 4, 4, 5};

    std::cout << "Multiset elements: ";
    for (int num : ms) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
