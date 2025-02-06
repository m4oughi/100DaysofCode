#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {10, 20, 40};
    std::list<int> list2 = {30};

    auto it = list1.begin();
    std::advance(it, 2);  // Move iterator to position before 40

    list1.splice(it, list2);  // Insert list2 before 40

    std::cout << "List1 after splicing: ";
    for (int val : list1) std::cout << val << " ";

    return 0;
}
