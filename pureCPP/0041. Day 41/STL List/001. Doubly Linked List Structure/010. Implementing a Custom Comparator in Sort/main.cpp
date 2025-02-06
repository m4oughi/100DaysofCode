#include <iostream>
#include <list>

bool customCompare(int a, int b) {
    return a > b;  // Sort in descending order
}

int main() {
    std::list<int> myList = {50, 10, 40, 30, 20};

    myList.sort(customCompare);

    std::cout << "List sorted in descending order: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
