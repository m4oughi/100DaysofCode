#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    for (auto it = myList.begin(); it != myList.end();) {
        if (*it % 2 == 0) {
            it = myList.erase(it); // Removes even numbers
        } else {
            ++it;
        }
    }

    std::cout << "List after removal: ";
    for (int num : myList) {
        std::cout << num << " ";
    }

    return 0;
}
