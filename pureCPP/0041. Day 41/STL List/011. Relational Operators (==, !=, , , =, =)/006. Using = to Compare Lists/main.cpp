#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {1, 2};

    if (list1 >= list2) {
        std::cout << "list1 is greater than or equal to list2.\n";
    }

    return 0;
}
