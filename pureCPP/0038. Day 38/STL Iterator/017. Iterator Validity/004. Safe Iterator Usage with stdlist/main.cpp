#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    std::list<int>::iterator it = numbers.begin();
    ++it; // Points to the second element (20)

    numbers.push_back(50); // Safe: Does not invalidate existing iterators
    numbers.erase(it);     // Erases element 20

    std::cout << "List after operations: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
