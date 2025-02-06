#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    numbers.erase(numbers.begin(), numbers.end()); // Erase entire list

    std::cout << "Size after erase: " << numbers.size() << std::endl;
    return 0;
}
