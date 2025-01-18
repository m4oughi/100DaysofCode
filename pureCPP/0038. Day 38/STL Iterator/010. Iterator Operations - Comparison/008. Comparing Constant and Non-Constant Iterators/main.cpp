#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};

    std::vector<int>::iterator it1 = numbers.begin();
    std::vector<int>::const_iterator it2 = numbers.cbegin();

    if (it1 == it2) {
        std::cout << "Iterator and const_iterator point to the same element." << std::endl;
    }

    return 0;
}
