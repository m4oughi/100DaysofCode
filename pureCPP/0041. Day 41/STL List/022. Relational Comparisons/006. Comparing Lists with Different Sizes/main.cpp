#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {1, 2, 3, 4}; // Extra element

    if (list1 < list2)
        std::cout << "list1 is smaller than list2 (due to size difference)\n";
    else
        std::cout << "list1 is not smaller than list2\n";

    return 0;
}
