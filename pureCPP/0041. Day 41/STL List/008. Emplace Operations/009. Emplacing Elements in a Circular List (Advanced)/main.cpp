#include <iostream>
#include <list>

int main() {
    std::list<int> circularList = {1, 2, 3, 4, 5};

    for (int i = 0; i < 3; ++i) {
        auto it = circularList.begin();
        std::advance(it, 2);  // Move to third element
        circularList.emplace_back(*it);  // Copy third element to back
    }

    std::cout << "Circular List: ";
    for (int num : circularList) std::cout << num << " ";

    return 0;
}
