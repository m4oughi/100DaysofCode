#include <iostream>
#include <list>
#include <algorithm> // Required for std::swap

int main() {
    std::list<int> listA = {11, 22, 33};
    std::list<int> listB = {99, 88, 77};

    std::swap(listA, listB); // Using std::swap()

    std::cout << "List A after swap: ";
    for (int num : listA) std::cout << num << " ";

    std::cout << "\nList B after swap: ";
    for (int num : listB) std::cout << num << " ";

    return 0;
}
