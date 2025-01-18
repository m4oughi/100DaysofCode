#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};
    auto it = numbers.begin();
    ++it; // Points to element 20

    numbers.push_back(50); // Does not invalidate the iterator
    numbers.erase(it);     // Invalidates only the iterator pointing to element 20

    std::cout << "List after operations: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
