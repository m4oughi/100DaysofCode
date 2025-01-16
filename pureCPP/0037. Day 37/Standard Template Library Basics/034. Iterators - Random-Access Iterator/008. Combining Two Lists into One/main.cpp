#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 3, 5};
    std::list<int> list2 = {2, 4, 6};

    auto it1 = list1.begin();
    auto it2 = list2.begin();

    std::list<int> combined;

    while (it1 != list1.end() && it2 != list2.end()) {
        if (*it1 < *it2) {
            combined.push_back(*it1++);
        } else {
            combined.push_back(*it2++);
        }
    }

    combined.insert(combined.end(), it1, list1.end());
    combined.insert(combined.end(), it2, list2.end());

    std::cout << "Combined list: ";
    for (int num : combined) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
