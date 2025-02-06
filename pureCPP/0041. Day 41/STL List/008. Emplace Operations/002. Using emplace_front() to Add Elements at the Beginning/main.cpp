#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;
    
    numbers.emplace_front(30);
    numbers.emplace_front(20);
    numbers.emplace_front(10);

    std::cout << "List after emplace_front: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
