#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3};

    numbers.resize(6);  // Increase size to 6 (default-initialized to 0)

    std::cout << "List after resizing: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
