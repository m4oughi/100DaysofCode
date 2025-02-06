#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    std::cout << "Maximum size the list can hold: " << numbers.max_size() << std::endl;

    return 0;
}
