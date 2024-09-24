#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Erase the second element using an iterator
    auto it = numbers.begin() + 1; // Pointing to the element to erase
    numbers.erase(it);

    std::cout << "Elements in the vector after erase using iterator:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
