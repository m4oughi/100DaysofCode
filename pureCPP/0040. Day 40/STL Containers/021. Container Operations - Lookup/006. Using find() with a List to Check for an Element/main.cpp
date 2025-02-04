#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> myList = {10, 20, 30, 40};

    // Searching for element 30
    auto it = std::find(myList.begin(), myList.end(), 30);

    if (it != myList.end()) {
        std::cout << "Element found: " << *it << std::endl; // Element found: 30
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
