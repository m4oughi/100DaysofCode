#include <iostream>
#include <array>

int main() {
    std::array<int, 0> emptyArr;
    std::array<int, 4> arr = {4, 8, 12, 16};

    std::cout << "Size of emptyArr: " << emptyArr.size() << std::endl;
    std::cout << "Is emptyArr empty? " << std::boolalpha << emptyArr.empty() << std::endl;

    return 0;
}
