#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {30, 10, 50, 20, 40};

    numbers.sort(); // Sort in ascending order

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
