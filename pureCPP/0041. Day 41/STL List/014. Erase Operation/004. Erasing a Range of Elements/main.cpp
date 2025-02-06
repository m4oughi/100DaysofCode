#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50, 60};

    auto start = numbers.begin();
    std::advance(start, 1); // Move to second element
    auto end = numbers.begin();
    std::advance(end, 4); // Move to the fifth element

    numbers.erase(start, end); // Erase elements from index 1 to 3

    std::cout << "List after erasing a range: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
