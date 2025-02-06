#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {10, 30, 50};
    std::list<int> list2 = {20, 40, 60};

    list1.merge(list2);  // Merge list2 into list1 (both must be sorted)

    std::cout << "Merged list: ";
    for (int val : list1) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
