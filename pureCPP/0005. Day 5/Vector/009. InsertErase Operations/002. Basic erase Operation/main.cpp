#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 25, 30, 40, 50};

    auto it = numbers.begin() + 2;  // Iterator to the 3rd position
    numbers.erase(it);  // Erase the element at the 3rd position

    std::cout << "Elements after erase:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
