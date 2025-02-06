#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {5, 2, 8};
    std::list<int> list2 = {2, 5, 8};

    list1.sort();
    list2.sort();

    if (list1 == list2)
        std::cout << "Both lists contain the same elements after sorting\n";
    else
        std::cout << "Lists are different even after sorting\n";

    return 0;
}
