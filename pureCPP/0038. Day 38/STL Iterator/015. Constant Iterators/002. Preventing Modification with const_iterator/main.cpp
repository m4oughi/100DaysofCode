#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::vector<int>::const_iterator it = numbers.cbegin();

    std::cout << "First element: " << *it << std::endl;

    // Uncommenting the line below will cause a compilation error
    // *it = 10; 

    return 0;
}
