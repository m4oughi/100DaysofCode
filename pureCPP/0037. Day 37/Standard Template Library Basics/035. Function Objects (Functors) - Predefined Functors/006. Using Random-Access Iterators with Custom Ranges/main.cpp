#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    std::cout << "Elements from index 2 to 4: ";
    for (auto it = vec.begin() + 2; it < vec.begin() + 5; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}
