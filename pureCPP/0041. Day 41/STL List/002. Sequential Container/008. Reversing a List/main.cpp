#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40};

    myList.reverse();  // Reverse the sequence

    std::cout << "Reversed list: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
