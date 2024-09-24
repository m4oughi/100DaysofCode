#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        std::cout << *it << " "; // Prints 10 20 30 40 50
    }
}
