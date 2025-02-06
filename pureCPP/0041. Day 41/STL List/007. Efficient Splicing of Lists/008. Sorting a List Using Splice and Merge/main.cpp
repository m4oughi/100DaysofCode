#include <iostream>
#include <list>

void sortedInsert(std::list<int>& sortedList, int value) {
    auto it = sortedList.begin();
    while (it != sortedList.end() && *it < value) {
        ++it;
    }
    sortedList.insert(it, value);
}

int main() {
    std::list<int> sortedList;
    std::list<int> unsortedList = {40, 10, 30, 50, 20};

    for (int num : unsortedList) {
        sortedInsert(sortedList, num);
    }

    std::cout << "Sorted List: ";
    for (int val : sortedList) std::cout << val << " ";

    return 0;
}
