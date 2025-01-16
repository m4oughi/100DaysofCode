#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};
    auto it = numbers.begin();
    std::advance(it, 2); // Move iterator to the 3rd position

    numbers.insert(it, 25); // Insert 25 before 30
    numbers.erase(--it);    // Remove 20

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
