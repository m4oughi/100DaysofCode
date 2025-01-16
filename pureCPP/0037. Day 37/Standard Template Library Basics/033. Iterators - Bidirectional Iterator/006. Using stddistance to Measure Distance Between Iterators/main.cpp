#include <iostream>
#include <forward_list>
#include <iterator>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40, 50};
    auto start = numbers.begin();
    auto end = numbers.end();

    std::cout << "Distance between iterators: " << std::distance(start, end) << "\n";

    return 0;
}
