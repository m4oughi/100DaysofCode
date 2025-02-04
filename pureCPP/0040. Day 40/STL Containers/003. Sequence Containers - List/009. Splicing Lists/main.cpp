#include <iostream>
#include <list>

int main() {
    std::list<int> lst1 = {1, 2, 3};
    std::list<int> lst2 = {4, 5, 6};

    // Move elements from lst2 to lst1 at position 2
    auto it = lst1.begin();
    std::advance(it, 2);
    lst1.splice(it, lst2);

    for (int i : lst1) std::cout << i << " ";

    return 0;
}
