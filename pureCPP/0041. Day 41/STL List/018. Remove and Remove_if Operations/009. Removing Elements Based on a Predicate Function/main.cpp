#include <iostream>
#include <list>

bool isEven(int num) {
    return num % 2 == 0; // Return true for even numbers
}

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5, 6};

    numbers.remove_if(isEven); // Remove even numbers using a function

    std::cout << "List after removing even numbers: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
