#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> list1 = {10, 20, 30};
    std::forward_list<int> list2 = {15, 25, 35};

    list1.merge(list2); // Merge list2 into list1
    list1.sort();       // Ensure sorted order

    for (int num : list1) {
        std::cout << num << " ";
    }
    return 0;
}
