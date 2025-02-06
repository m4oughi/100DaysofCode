#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 3, 5, 7};
    std::list<int> list2 = {2, 4, 6, 8};

    list1.merge(list2);  // Merging list2 into list1

    std::cout << "Merged list: ";
    for (int num : list1) std::cout << num << " ";

    return 0;
}
