#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;
    
    std::cout << "Initial size: " << numbers.size() << std::endl;

    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);

    std::cout << "Size after inserting 3 elements: " << numbers.size() << std::endl;

    return 0;
}
