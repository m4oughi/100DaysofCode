#include <iostream>
#include <initializer_list>

void printNumbers(std::initializer_list<int> nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    printNumbers({1, 2, 3, 4, 5});
    return 0;
}
