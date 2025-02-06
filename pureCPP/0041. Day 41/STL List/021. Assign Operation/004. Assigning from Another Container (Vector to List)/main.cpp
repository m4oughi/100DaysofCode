#include <iostream>
#include <list>
#include <vector>

int main() {
    std::vector<int> vec = {100, 200, 300, 400};
    std::list<int> myList;

    myList.assign(vec.begin(), vec.end()); // Assigning from vector

    std::cout << "List after assign from vector: ";
    for (int num : myList) std::cout << num << " ";

    return 0;
}
