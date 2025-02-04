#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5, 6};

    // Erase elements from the second to the fourth position
    auto it1 = myList.begin();
    auto it2 = it1;
    std::advance(it2, 3); // Move iterator to the fourth position
    myList.erase(it1, it2);

    std::cout << "List after range erase: ";
    for (int n : myList) std::cout << n << " "; // 4 5 6

    return 0;
}
