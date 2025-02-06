#include <iostream>
#include <list>

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    std::list<int> myList = {10, 15, 20, 25, 30};

    myList.remove_if(isEven);  // Remove all even numbers

    std::cout << "List after removing even numbers: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
