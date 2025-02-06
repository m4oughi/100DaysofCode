#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {-5, 3, -1, 7, -2, 8, 0};

    numbers.remove_if([](int num) { return num < 0; }); // Remove negative numbers

    std::cout << "List after removing negative numbers: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
