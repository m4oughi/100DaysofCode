#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 25, 30, 5, 40, 15};

    numbers.remove_if([](int num) { return num > 20; }); // Remove numbers greater than 20

    std::cout << "List after removing numbers greater than 20: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
