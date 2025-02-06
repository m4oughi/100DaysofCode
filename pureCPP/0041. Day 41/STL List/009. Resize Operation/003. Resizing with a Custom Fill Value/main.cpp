#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 10, 15};

    numbers.resize(6, 100);  // Increase size and fill new values with 100

    std::cout << "List after resizing: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
