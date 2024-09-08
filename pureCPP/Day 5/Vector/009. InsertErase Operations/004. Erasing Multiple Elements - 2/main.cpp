#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 25, 26, 27, 30, 40, 50};

    auto it1 = numbers.begin() + 2;  // Iterator to the 3rd position
    auto it2 = numbers.begin() + 5;  // Iterator to the 6th position
    numbers.erase(it1, it2);  // Erase elements from 3rd to 5th position

    std::cout << "Elements after erasing a range:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
