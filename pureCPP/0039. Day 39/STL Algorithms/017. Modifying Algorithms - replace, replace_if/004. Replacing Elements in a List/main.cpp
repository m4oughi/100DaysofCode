#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> lst = {10, 20, 30, 20, 40};

    std::replace(lst.begin(), lst.end(), 20, 99);

    std::cout << "After replace in list: ";
    for (int num : lst) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
