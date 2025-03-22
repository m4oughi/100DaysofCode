#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {4, 5, 6, 7, 8};

    auto start = std::next(list2.begin()); // Points to `5`
    auto end = std::next(start, 2);        // Points to `7` (end is exclusive)

    list1.splice(list1.end(), list2, start, end); // Move {5, 6} to list1

    std::cout << "List1 after splicing: ";
    for (int n : list1) std::cout << n << " ";
    std::cout << "\nList2 after splicing: ";
    for (int n : list2) std::cout << n << " ";
    std::cout << '\n';

    return 0;
}
