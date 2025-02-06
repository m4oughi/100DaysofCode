#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {10, 20, 30};
    std::list<int> list2 = {5, 15, 25, 35};

    list1.merge(list2);  // Merge two sorted lists

    std::cout << "Merged list: ";
    for (int val : list1) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
