#include <iostream>
#include <list>

int main() {
    std::list<int> lst;

    // Add elements at the back and front
    lst.push_back(10);
    lst.push_front(20);
    lst.push_back(30);

    for (int i : lst) std::cout << i << " ";
    std::cout << "\n";

    // Remove elements from the back and front
    lst.pop_front();
    lst.pop_back();

    for (int i : lst) std::cout << i << " ";

    return 0;
}
