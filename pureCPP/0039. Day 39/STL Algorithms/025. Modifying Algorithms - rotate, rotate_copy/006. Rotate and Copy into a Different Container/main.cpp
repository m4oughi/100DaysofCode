#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::list<int> rotated_list;

    std::rotate_copy(vec.begin(), vec.begin() + 2, vec.end(), std::back_inserter(rotated_list));

    std::cout << "Rotated list: ";
    for (int num : rotated_list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
