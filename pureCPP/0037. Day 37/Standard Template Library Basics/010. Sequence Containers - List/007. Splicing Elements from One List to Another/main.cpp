#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {4, 5, 6};

    auto it = list1.begin();
    std::advance(it, 1); // Move iterator to second element of list1
    list1.splice(it, list2); // Splice entire list2 into list1 at second position

    for (int num : list1) {
        std::cout << num << " ";
    }
    return 0;
}
