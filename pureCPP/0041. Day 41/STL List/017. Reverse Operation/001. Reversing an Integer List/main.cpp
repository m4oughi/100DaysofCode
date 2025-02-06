#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    numbers.reverse(); // Reverse the list

    std::cout << "Reversed List: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
