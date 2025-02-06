#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {1, 2, 4};

    if (list1 != list2) {
        std::cout << "Lists are different.\n";
    } else {
        std::cout << "Lists are identical.\n";
    }

    return 0;
}
