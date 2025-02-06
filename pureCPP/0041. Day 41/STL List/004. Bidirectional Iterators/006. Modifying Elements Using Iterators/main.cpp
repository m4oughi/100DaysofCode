#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {5, 10, 15, 20};

    for (auto it = myList.begin(); it != myList.end(); ++it) {
        *it *= 2;  // Multiply each element by 2
    }

    std::cout << "List after modification: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
