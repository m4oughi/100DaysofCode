#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {10, 20, 30};
    std::list<int> list2 = {100, 200, 300};

    list1.clear();
    list2.clear();

    std::cout << "List1 size: " << list1.size() << ", List2 size: " << list2.size() << std::endl;
    return 0;
}
