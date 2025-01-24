#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::list<int> reversed_list;

    std::reverse_copy(vec.begin(), vec.end(), std::back_inserter(reversed_list));

    std::cout << "Reversed list: ";
    for (int num : reversed_list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
