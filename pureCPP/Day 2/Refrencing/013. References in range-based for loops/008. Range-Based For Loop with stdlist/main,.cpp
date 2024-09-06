#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4};

    for (auto& value : myList) {  // auto& deduces that value is an l-value reference
        value += 1;  // Modify each element in the list
    }

    for (const auto& value : myList) {
        std::cout << value << " ";  // Output: 2 3 4 5
    }
}
