#include <iostream>
#include <forward_list>
#include <iterator>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40, 50};
    auto it = numbers.begin();

    std::advance(it, 3); // Advance iterator by 3 positions

    std::cout << "Element at position 4: " << *it << "\n";

    return 0;
}
