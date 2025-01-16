#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30, 40};

    std::cout << "First element: " << lst.front() << "\n";
    std::cout << "Last element: " << lst.back() << "\n";

    lst.push_front(5);
    lst.push_back(50);
    std::cout << "After adding elements: First: " << lst.front() << ", Last: " << lst.back() << "\n";

    return 0;
}
