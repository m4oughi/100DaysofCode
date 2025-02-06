#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    int rotations = 2;  // Number of times to rotate

    for (int i = 0; i < rotations; ++i) {
        myList.push_back(myList.front());  
        myList.pop_front();  
    }

    std::cout << "List after rotation: ";
    for (int val : myList) std::cout << val << " ";

    return 0;
}
