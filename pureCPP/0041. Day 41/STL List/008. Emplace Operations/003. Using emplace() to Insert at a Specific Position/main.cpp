#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 40};

    auto it = numbers.begin();
    std::advance(it, 2);  // Move iterator to position before 40

    numbers.emplace(it, 30);  // Insert 30 before 40

    std::cout << "List after emplace: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
