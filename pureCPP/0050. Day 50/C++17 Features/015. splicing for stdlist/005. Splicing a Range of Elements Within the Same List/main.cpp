#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3, 4, 5, 6};

    auto start = std::next(list1.begin(), 2); // Points to `3`
    auto end = std::next(start, 2);           // Points to `5`

    list1.splice(list1.begin(), list1, start, end); // Move {3, 4} to the front

    std::cout << "List1 after splicing: ";
    for (int n : list1) std::cout << n << " ";
    std::cout << '\n';

    return 0;
}
