#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3, 4, 5};

    auto it = std::next(list1.begin(), 2); // Points to `3`
    list1.splice(list1.begin(), list1, it); // Move `3` to the beginning

    std::cout << "List1 after splicing: ";
    for (int n : list1) std::cout << n << " ";
    std::cout << '\n';

    return 0;
}
