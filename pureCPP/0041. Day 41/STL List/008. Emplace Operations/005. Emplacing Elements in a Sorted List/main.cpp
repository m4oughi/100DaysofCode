#include <iostream>
#include <list>

int main() {
    std::list<int> sortedList = {10, 20, 40, 50};

    auto it = sortedList.begin();
    while (it != sortedList.end() && *it < 30) {
        ++it;
    }
    sortedList.emplace(it, 30);  // Insert 30 in sorted order

    std::cout << "Sorted List after emplace: ";
    for (int num : sortedList) std::cout << num << " ";

    return 0;
}
