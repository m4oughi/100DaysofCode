#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30};

    // Using iterator to insert at a specific position
    auto it = myList.begin();
    std::advance(it, 1); // Move iterator to the second position
    myList.insert(it, 25);

    std::cout << "List after insert: ";
    for (int n : myList) std::cout << n << " "; // 10 25 20 30

    return 0;
}
