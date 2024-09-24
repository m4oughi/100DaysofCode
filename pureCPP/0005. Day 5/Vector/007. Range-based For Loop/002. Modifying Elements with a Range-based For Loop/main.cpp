#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Doubling each element:" << std::endl;
    for (int& num : numbers) {
        num *= 2;
    }

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
