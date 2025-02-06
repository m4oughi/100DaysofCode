#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4};

    numbers.clear(); // Clearing list before reuse
    numbers.push_back(100);
    numbers.push_back(200);

    std::cout << "List after reuse: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
