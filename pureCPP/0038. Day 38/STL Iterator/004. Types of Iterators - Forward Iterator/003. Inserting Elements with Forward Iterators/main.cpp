#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30};

    auto it = numbers.before_begin(); // Iterator to the position before the first element
    numbers.insert_after(it, 5);      // Insert 5 after the "before_begin" position

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
