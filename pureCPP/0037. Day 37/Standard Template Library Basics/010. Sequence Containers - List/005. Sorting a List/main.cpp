#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 2, 4, 1, 3};
    numbers.sort(); // Sorts the list in ascending order

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
