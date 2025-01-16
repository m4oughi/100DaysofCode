#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};
    numbers.reverse(); // Reverses the order of elements

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
