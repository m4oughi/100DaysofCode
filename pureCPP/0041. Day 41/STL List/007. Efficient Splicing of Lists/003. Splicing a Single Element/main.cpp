#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {10, 20, 30};
    std::list<int> list2 = {40, 50, 60};

    auto it = list2.begin();
    std::advance(it, 1);  // Move to second element (50)

    list1.splice(list1.begin(), list2, it);  // Move only 50 to list1

    std::cout << "List1 after splicing: ";
    for (int val : list1) std::cout << val << " ";

    std::cout << "\nList2 after splicing: ";
    for (int val : list2) std::cout << val << " ";

    return 0;
}
