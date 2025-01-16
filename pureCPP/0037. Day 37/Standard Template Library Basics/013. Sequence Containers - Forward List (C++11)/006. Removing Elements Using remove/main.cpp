#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 2, 4, 2, 5};

    numbers.remove(2); // Remove all occurrences of 2

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
