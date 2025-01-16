#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};

    numbers.reverse(); // Reverse the order

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
