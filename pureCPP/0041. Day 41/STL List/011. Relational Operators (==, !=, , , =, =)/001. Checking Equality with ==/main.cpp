#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {1, 2, 3};

    if (list1 == list2) {
        std::cout << "Both lists are equal.\n";
    } else {
        std::cout << "Lists are not equal.\n";
    }

    return 0;
}
