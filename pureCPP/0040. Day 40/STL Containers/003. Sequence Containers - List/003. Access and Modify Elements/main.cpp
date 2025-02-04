#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30, 40};

    // Access using iterators
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        *it += 5;
    }

    for (int i : lst) std::cout << i << " ";

    return 0;
}
