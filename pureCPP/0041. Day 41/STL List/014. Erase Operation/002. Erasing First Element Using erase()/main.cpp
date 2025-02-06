#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 10, 15, 20};

    numbers.erase(numbers.begin()); // Erase the first element

    std::cout << "List after erasing first element: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
