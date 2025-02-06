#include <iostream>
#include <list>

int main() {
    std::list<int*> ptrList;

    ptrList.resize(3, new int(10));  // Create 3 elements, all pointing to new int(10)

    std::cout << "List of pointers: ";
    for (int* ptr : ptrList) std::cout << *ptr << " ";

    // Cleanup dynamically allocated memory
    for (int* ptr : ptrList) delete ptr;

    return 0;
}
