#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};
    auto it = numbers.before_begin(); // Iterator pointing before the first element

    for (auto current = numbers.begin(); current != numbers.end();) {
        if (*current % 2 == 0) { // Remove even numbers
            current = numbers.erase_after(it);
        } else {
            it = current++;
        }
    }

    std::cout << "Forward list after removing evens: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
