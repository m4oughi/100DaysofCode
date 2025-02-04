#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30, 20, 40, 20};

    // Remove all occurrences of 20
    lst.remove(20);

    for (int i : lst) std::cout << i << " ";

    return 0;
}
