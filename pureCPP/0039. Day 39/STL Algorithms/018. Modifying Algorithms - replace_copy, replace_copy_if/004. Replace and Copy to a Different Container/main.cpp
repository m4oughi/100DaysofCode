#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::list<int> result;

    std::replace_copy(vec.begin(), vec.end(), std::back_inserter(result), 3, 99);

    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }

    std::cout << "\nResult list: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
