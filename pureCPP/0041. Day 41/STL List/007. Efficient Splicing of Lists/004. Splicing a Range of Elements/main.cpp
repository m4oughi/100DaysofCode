#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {4, 5, 6, 7, 8};

    auto start = list2.begin();
    auto end = list2.begin();
    std::advance(start, 1);  // Point to 5
    std::advance(end, 4);    // Point to 8 (exclusive)

    list1.splice(list1.end(), list2, start, end);  // Move elements [5,6,7]

    std::cout << "List1 after splicing: ";
    for (int val : list1) std::cout << val << " ";

    std::cout << "\nList2 after splicing: ";
    for (int val : list2) std::cout << val << " ";

    return 0;
}
