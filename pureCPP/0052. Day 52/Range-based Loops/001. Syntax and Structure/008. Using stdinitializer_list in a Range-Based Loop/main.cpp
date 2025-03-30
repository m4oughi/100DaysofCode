#include <iostream>
#include <initializer_list>

void printNumbers(std::initializer_list<int> nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
}

int main() {
    printNumbers({10, 20, 30, 40, 50});
    return 0;
}
