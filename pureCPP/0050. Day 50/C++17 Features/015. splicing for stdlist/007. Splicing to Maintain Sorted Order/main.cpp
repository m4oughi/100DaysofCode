#include <iostream>
#include <list>

int main() {
    std::list<int> sortedList = {1, 3, 5, 7};
    std::list<int> newElements = {2, 4, 6};

    auto it = sortedList.begin();
    while (it != sortedList.end() && *it < 4) ++it;

    sortedList.splice(it, newElements); // Insert newElements into the correct place

    std::cout << "Sorted List after splicing: ";
    for (int n : sortedList) std::cout << n << " ";
    std::cout << '\n';

    return 0;
}
