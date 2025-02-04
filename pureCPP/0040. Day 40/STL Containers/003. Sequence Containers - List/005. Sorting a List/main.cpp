#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {50, 10, 40, 30, 20};

    // Sort in ascending order
    lst.sort();

    for (int i : lst) std::cout << i << " ";
    std::cout << "\n";

    // Sort in descending order
    lst.sort(std::greater<int>());

    for (int i : lst) std::cout << i << " ";

    return 0;
}
