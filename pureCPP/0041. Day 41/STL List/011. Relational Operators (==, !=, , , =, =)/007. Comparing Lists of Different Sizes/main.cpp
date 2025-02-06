#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2};
    std::list<int> list2 = {1, 2, 3};

    if (list1 < list2) {
        std::cout << "list1 is smaller because it has fewer elements.\n";
    }

    return 0;
}
