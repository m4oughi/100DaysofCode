#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int>::const_iterator it;

    for (it = vec.cbegin(); it != vec.cend(); ++it) {
        std::cout << *it << " "; // Prints 1 2 3 4 5
    }
}
