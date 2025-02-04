#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {100, 200, 300};

    std::list<int>::iterator it = myList.begin();
    std::cout << "First element: " << *it << "\n"; // 100

    return 0;
}
