#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {1, 2, 4};  // Different last element

    if (list1 != list2)
        std::cout << "Lists are different\n";
    else
        std::cout << "Both lists are equal\n";

    return 0;
}
