#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {10, 10, 20, 30, 30, 40, 40};

    // Remove consecutive duplicates
    lst.unique();

    for (int i : lst) std::cout << i << " ";

    return 0;
}
