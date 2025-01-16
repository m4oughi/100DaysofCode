#include <iostream>
#include <list>

int main() {
    std::list<int> dequeList;

    dequeList.push_front(1);
    dequeList.push_back(2);
    dequeList.push_front(0);
    dequeList.push_back(3);

    dequeList.pop_front(); // Removes 0
    dequeList.pop_back();  // Removes 3

    for (int num : dequeList) {
        std::cout << num << " ";
    }
    return 0;
}
