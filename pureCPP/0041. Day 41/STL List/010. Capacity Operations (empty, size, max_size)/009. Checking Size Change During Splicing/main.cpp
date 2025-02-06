#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {4, 5, 6};

    std::cout << "Before splicing: List1 size = " << list1.size() << ", List2 size = " << list2.size() << std::endl;

    list1.splice(list1.end(), list2);  // Move all elements from list2 to list1

    std::cout << "After splicing: List1 size = " << list1.size() << ", List2 size = " << list2.size() << std::endl;

    return 0;
}
