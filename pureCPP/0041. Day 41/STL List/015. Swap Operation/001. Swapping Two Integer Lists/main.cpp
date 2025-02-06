#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {10, 20, 30};

    list1.swap(list2); // Swap the contents of list1 and list2

    std::cout << "List 1: ";
    for (int num : list1) std::cout << num << " ";
    
    std::cout << "\nList 2: ";
    for (int num : list2) std::cout << num << " ";

    return 0;
}
