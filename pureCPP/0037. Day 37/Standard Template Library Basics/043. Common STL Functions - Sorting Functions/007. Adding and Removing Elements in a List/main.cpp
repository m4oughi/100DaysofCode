#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30};

    lst.push_front(5); // Add to the front
    lst.push_back(40); // Add to the back
    std::cout << "After push: ";
    for (int v : lst) std::cout << v << " ";
    std::cout << "\n";

    lst.pop_front(); // Remove from the front
    lst.pop_back();  // Remove from the back
    std::cout << "After pop: ";
    for (int v : lst) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
