#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3, 4};
    std::list<int> list2 = {10, 20, 30};

    auto it = list1.begin();
    std::advance(it, 2);  // Move iterator to position after 2nd element

    list1.splice(it, list2);  // Splice all elements of list2 into list1

    std::cout << "List1 after splicing: ";
    for (int val : list1) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
