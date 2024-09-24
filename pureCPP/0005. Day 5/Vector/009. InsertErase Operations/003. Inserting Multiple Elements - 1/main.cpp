#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin() + 2;  // Iterator to the 3rd position
    numbers.insert(it, {25, 26, 27});  // Insert multiple elements

    std::cout << "Elements after inserting multiple elements:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
