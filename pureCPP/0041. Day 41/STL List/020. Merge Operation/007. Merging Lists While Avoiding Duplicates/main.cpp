#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3, 4};
    std::list<int> list2 = {3, 4, 5, 6};

    list1.merge(list2);  
    list1.unique();  // Remove duplicate elements after merging

    std::cout << "Merged list without duplicates: ";
    for (int num : list1) std::cout << num << " ";

    return 0;
}
