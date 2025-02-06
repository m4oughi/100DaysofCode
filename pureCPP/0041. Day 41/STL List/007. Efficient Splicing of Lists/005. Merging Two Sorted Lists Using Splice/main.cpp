#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {10, 30, 50};
    std::list<int> list2 = {20, 40, 60};

    auto it = list1.begin();
    std::advance(it, 1);  // Position after first element

    list1.splice(it, list2);  // Merge list2 after first element of list1

    std::cout << "Merged List: ";
    for (int val : list1) std::cout << val << " ";

    return 0;
}
