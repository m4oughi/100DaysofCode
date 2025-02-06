#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40};

    std::cout << "Front element: " << myList.front() << std::endl;
    std::cout << "Back element: " << myList.back() << std::endl;

    return 0;
}
