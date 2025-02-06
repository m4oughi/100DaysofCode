#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {7, 3, 1, 5};
    std::list<int> list2 = {8, 6, 4, 2};

    list1.sort();  // Sorting before merging
    list2.sort();

    list1.merge(list2);

    std::cout << "Merged sorted list: ";
    for (int num : list1) std::cout << num << " ";

    return 0;
}
