#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 15, 20, 25, 30, 35, 40};

    numbers.remove_if([](int num) { return num % 5 == 0; }); // Remove multiples of 5

    std::cout << "List after removing multiples of 5: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
