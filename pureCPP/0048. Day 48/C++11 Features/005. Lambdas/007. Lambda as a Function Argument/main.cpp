#include <iostream>
#include <vector>

void processVector(const std::vector<int>& nums, auto func) {
    for (int num : nums) {
        func(num);
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    processVector(numbers, [](int num) { std::cout << num * num << " "; });

    return 0;
}
