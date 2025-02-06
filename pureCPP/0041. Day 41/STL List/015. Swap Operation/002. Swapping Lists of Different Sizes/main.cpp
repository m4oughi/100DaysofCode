#include <iostream>
#include <list>

int main() {
    std::list<int> smallList = {5, 10};
    std::list<int> largeList = {100, 200, 300, 400, 500};

    smallList.swap(largeList);

    std::cout << "Small List after swap: ";
    for (int num : smallList) std::cout << num << " ";

    std::cout << "\nLarge List after swap: ";
    for (int num : largeList) std::cout << num << " ";

    return 0;
}
