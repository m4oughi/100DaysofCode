#include <iostream>
#include <list>

int main() {
    std::list<int> emptyList;
    std::list<int> nonEmptyList = {1, 2, 3, 4};

    emptyList.swap(nonEmptyList);

    std::cout << "Empty List after swap: ";
    for (int num : emptyList) std::cout << num << " ";

    std::cout << "\nNon-Empty List after swap: ";
    for (int num : nonEmptyList) std::cout << num << " ";

    return 0;
}
