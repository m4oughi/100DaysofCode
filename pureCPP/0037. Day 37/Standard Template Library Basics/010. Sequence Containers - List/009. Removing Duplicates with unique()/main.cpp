#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    numbers.sort();     // Sort before calling unique to remove all duplicates
    numbers.unique();   // Removes consecutive duplicates

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
