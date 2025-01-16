#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3};
    auto it = numbers.begin();
    std::advance(it, 1); // Move iterator to the second element
    numbers.insert(it, 10); // Insert 10 before the second element
    numbers.erase(it); // Erase what was the second element

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
