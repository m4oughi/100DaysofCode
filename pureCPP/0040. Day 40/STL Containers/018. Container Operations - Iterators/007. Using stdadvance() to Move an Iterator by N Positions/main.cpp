#include <iostream>
#include <list>
#include <iterator>

int main() {
    std::list<int> myList = {10, 20, 30, 40, 50};
    auto it = myList.begin();
    
    std::advance(it, 3); // Move iterator to the 4th element
    std::cout << "Element at position 4: " << *it << "\n"; // 40

    return 0;
}
