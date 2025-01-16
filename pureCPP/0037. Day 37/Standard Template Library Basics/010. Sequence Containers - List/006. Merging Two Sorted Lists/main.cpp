#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 3, 5};
    std::list<int> list2 = {2, 4, 6};

    list1.merge(list2); // Merges list2 into list1; list1 is now {1, 2, 3, 4, 5, 6}

    for (int num : list1) {
        std::cout << num << " ";
    }
    return 0;
}
