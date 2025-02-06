#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;
    
    numbers.emplace_back(10);
    numbers.emplace_back(20);
    numbers.emplace_back(30);

    std::cout << "List after emplace_back: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
