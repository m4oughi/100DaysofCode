#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3};

    // Inserting an element at the second position
    auto it = myList.begin();
    std::advance(it, 1); // Move iterator to the second position
    myList.insert(it, 10);

    std::cout << "List after insert: ";
    for (int n : myList) std::cout << n << " "; // 1 10 2 3

    return 0;
}
