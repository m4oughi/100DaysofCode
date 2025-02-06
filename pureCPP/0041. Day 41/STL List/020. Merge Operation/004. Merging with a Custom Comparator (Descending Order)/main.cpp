#include <iostream>
#include <list>

bool descending(int a, int b) {
    return a > b;  // Custom comparator for descending order
}

int main() {
    std::list<int> list1 = {7, 5, 3, 1};
    std::list<int> list2 = {8, 6, 4, 2};

    list1.merge(list2, descending);

    std::cout << "Merged list (Descending order): ";
    for (int num : list1) std::cout << num << " ";

    return 0;
}
