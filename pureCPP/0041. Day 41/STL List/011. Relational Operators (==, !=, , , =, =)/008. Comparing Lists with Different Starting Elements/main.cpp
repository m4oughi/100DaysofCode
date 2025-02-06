#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {2, 1, 3};
    std::list<int> list2 = {1, 2, 3};

    if (list1 > list2) {
        std::cout << "list1 is greater because the first differing element is larger.\n";
    }

    return 0;
}
