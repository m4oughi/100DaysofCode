#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Regular iterator: Can modify elements
    std::vector<int>::iterator it1 = vec.begin();
    *it1 = 10;
    std::cout << vec[0] << std::endl; // Prints 10

    // const_iterator: Cannot modify elements
    std::vector<int>::const_iterator it2 = vec.cbegin();
    // *it2 = 20; // Error: cannot assign to a variable that is const
}
