#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {4, 5, 6};

    auto it = list2.begin(); // Iterator pointing to the first element (4)
    list1.splice(list1.begin(), list2, it); // Move `4` to the beginning of list1

    std::cout << "List1 after splicing: ";
    for (int n : list1) std::cout << n << " ";
    std::cout << "\nList2 after splicing: ";
    for (int n : list2) std::cout << n << " ";
    std::cout << '\n';

    return 0;
}
