#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {4, 5, 6};

    list1.splice(list1.end(), list2); // Move all elements from list2 to list1

    std::cout << "List1 after splicing: ";
    for (int n : list1) std::cout << n << " ";
    std::cout << "\nList2 size: " << list2.size() << '\n';

    return 0;
}
