#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40, 50};

    // Erase elements from position 2 to 4 (i.e., 30, 40, 50)
    auto start = myList.begin();
    std::advance(start, 2);  // Move iterator to position 2
    auto end = start;
    std::advance(end, 3);    // Move iterator to position 5

    myList.erase(start, end);

    // Output the list after erase
    std::cout << "List after erase: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
