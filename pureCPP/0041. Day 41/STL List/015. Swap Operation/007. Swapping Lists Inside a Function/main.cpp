#include <iostream>
#include <list>

void swapLists(std::list<int>& list1, std::list<int>& list2) {
    list1.swap(list2);
}

int main() {
    std::list<int> evens = {2, 4, 6, 8};
    std::list<int> odds = {1, 3, 5, 7};

    swapLists(evens, odds);

    std::cout << "Evens: ";
    for (int num : evens) std::cout << num << " ";

    std::cout << "\nOdds: ";
    for (int num : odds) std::cout << num << " ";

    return 0;
}
