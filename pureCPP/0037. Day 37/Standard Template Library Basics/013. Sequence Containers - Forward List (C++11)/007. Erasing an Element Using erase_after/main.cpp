#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin();
    std::advance(it, 2); // Move to the third element
    numbers.erase_after(it); // Erase the element after the third

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
