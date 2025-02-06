#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {1, 2, 3};
    std::list<int> list3 = {1, 2, 4};

    if (list1 <= list2)
        std::cout << "list1 is less than or equal to list2\n";

    if (list3 >= list1)
        std::cout << "list3 is greater than or equal to list1\n";

    return 0;
}
