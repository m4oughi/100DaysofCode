#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 3, 5};
    std::list<int> list2 = {1, 2, 6};

    if (list1 > list2)
        std::cout << "list1 is greater than list2\n";
    else
        std::cout << "list1 is not greater than list2\n";

    return 0;
}
