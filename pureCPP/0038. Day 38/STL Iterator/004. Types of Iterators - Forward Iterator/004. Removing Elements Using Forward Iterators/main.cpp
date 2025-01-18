#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.before_begin(); // Iterator to the position before the first element
    numbers.erase_after(it);          // Remove the first element (10)

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
