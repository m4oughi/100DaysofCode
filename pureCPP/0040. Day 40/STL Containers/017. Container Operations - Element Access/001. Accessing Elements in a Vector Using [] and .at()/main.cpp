#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    std::cout << "First element using []: " << vec[0] << "\n"; // 10
    std::cout << "Third element using .at(): " << vec.at(2) << "\n"; // 30

    return 0;
}
