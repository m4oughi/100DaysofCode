#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::vector<int>::const_reverse_iterator rit;

    for (rit = vec.crbegin(); rit != vec.crend(); ++rit) {
        std::cout << *rit << " "; // Prints 5 4 3 2 1
    }
}
