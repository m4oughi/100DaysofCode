#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};

    auto it = std::partition(vec.begin(), vec.end(), [](int x) { return x < 5; });

    std::cout << "Elements < 5: ";
    for (auto itr = vec.begin(); itr != it; ++itr) {
        std::cout << *itr << " ";
    }

    std::cout << "\nElements >= 5: ";
    for (auto itr = it; itr != vec.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    return 0;
}
