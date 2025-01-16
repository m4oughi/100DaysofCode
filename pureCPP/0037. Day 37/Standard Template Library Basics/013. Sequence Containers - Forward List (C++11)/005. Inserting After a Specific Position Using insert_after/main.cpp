#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 4, 5};

    auto it = numbers.begin();
    std::advance(it, 2); // Move iterator to the third position
    numbers.insert_after(it, 3); // Insert 3 after the third position

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
