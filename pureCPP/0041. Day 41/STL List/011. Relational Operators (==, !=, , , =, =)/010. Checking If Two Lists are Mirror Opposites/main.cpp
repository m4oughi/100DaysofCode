#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {3, 2, 1};

    list2.reverse(); // Reverse list2

    if (list1 == list2) {
        std::cout << "list2 is the reverse of list1.\n";
    } else {
        std::cout << "list2 is NOT the reverse of list1.\n";
    }

    return 0;
}
