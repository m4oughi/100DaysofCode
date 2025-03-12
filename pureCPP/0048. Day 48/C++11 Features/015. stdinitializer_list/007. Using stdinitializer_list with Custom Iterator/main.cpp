#include <iostream>
#include <initializer_list>
#include <iterator>

void printElements(std::initializer_list<int> elems) {
    auto it = elems.begin();
    while (it != elems.end()) {
        std::cout << *it++ << " ";
    }
    std::cout << "\n";
}

int main() {
    printElements({10, 20, 30, 40});
    return 0;
}
