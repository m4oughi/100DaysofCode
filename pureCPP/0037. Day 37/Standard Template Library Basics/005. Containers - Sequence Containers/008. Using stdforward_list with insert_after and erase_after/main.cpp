#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40};
    auto it = numbers.begin();

    numbers.insert_after(it, 15); // Insert 15 after 10
    numbers.erase_after(it);      // Remove 15 (the next element)

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
