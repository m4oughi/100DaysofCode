#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    numbers.resize(5, 42);  // List starts empty but resizes to 5 elements of 42

    std::cout << "List after resizing: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
