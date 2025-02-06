#include <iostream>
#include <list>

int main() {
    std::list<int> myList;
    int maxSize = 3;

    for (int i = 1; i <= 5; ++i) {
        if (myList.size() == maxSize) {
            myList.pop_front();  // Remove oldest element if size exceeds limit
        }
        myList.push_back(i * 10);
    }

    std::cout << "Fixed-size list: ";
    for (int val : myList) std::cout << val << " ";

    return 0;
}
