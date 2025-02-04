#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};

    // Reverse the list
    lst.reverse();

    for (int i : lst) std::cout << i << " ";

    return 0;
}
