#include <iostream>
#include <list>

bool isOdd(int value) {
    return value % 2 != 0;
}

int main() {
    std::list<int> myList = {10, 15, 20, 25, 30};

    myList.remove_if(isOdd);  // Remove all odd numbers

    std::cout << "List after remove_if: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
