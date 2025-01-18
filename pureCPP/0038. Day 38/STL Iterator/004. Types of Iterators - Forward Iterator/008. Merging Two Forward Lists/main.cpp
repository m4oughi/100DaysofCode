#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> list1 = {1, 3, 5};
    std::forward_list<int> list2 = {2, 4, 6};

    list1.merge(list2); // Merge list2 into list1 (both must be sorted)

    for (const auto& num : list1) {
        std::cout << num << " ";
    }

    return 0;
}
