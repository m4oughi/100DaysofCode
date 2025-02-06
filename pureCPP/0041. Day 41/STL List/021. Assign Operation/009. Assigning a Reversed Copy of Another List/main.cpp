#include <iostream>
#include <list>

int main() {
    std::list<int> original = {1, 2, 3, 4, 5};
    std::list<int> reversedList;

    reversedList.assign(original.rbegin(), original.rend()); // Assign reversed order

    std::cout << "Reversed list: ";
    for (int num : reversedList) std::cout << num << " ";

    return 0;
}
