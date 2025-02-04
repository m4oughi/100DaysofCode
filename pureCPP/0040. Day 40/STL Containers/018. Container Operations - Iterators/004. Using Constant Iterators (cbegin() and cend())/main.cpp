#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {5, 10, 15, 20};

    std::cout << "Constant Iterator: ";
    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
