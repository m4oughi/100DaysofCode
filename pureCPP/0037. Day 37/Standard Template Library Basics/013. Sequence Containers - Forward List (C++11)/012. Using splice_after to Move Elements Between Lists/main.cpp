#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> list1 = {1, 2, 3};
    std::forward_list<int> list2 = {4, 5, 6};

    list1.splice_after(list1.begin(), list2); // Move all elements from list2 to list1

    for (int num : list1) {
        std::cout << num << " ";
    }
    return 0;
}
