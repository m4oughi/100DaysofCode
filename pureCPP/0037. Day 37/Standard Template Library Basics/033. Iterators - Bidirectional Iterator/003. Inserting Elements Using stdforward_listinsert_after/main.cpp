#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 4, 5};
    auto it = numbers.begin();
    ++it; // Move iterator to the second element

    numbers.insert_after(it, 3); // Insert 3 after the second element

    std::cout << "Forward list after insertion: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
