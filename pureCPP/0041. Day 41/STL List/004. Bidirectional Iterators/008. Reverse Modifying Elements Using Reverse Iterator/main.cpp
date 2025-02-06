#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    for (auto rit = myList.rbegin(); rit != myList.rend(); ++rit) {
        *rit += 10;  // Add 10 to each element in reverse order
    }

    std::cout << "List after reverse modification: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
