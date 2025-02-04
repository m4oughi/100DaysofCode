#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30, 40};

    // Insert at specific position
    auto it = lst.begin();
    std::advance(it, 2); // Move iterator to the 3rd position
    lst.insert(it, 25);

    // Erase element at the same position
    lst.erase(it);

    for (int i : lst) std::cout << i << " ";

    return 0;
}
