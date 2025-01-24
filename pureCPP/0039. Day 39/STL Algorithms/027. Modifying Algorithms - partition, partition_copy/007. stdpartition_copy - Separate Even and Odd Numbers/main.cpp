#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> evens, odds;

    std::partition_copy(vec.begin(), vec.end(), std::back_inserter(odds), std::back_inserter(evens),
                        [](int x) { return x % 2 != 0; });

    std::cout << "Odd numbers: ";
    for (int num : odds) {
        std::cout << num << " ";
    }

    std::cout << "\nEven numbers: ";
    for (int num : evens) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
