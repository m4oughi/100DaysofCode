#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3, 4, 5};
    std::list<int> list2;

    list2.assign(list1.begin(), list1.end()); // Assign from another list

    std::cout << "List2 after assign: ";
    for (int num : list2) std::cout << num << " ";

    return 0;
}
