#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us1 = {1, 2, 3};
    std::unordered_set<int> us2 = {10, 20, 30};

    std::cout << "Before swap: " << std::endl;
    std::cout << "Set 1: ";
    for (int num : us1) std::cout << num << " ";
    std::cout << std::endl;

    std::cout << "Set 2: ";
    for (int num : us2) std::cout << num << " ";
    std::cout << std::endl;

    us1.swap(us2);

    std::cout << "After swap: " << std::endl;
    std::cout << "Set 1: ";
    for (int num : us1) std::cout << num << " ";
    std::cout << std::endl;

    std::cout << "Set 2: ";
    for (int num : us2) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
