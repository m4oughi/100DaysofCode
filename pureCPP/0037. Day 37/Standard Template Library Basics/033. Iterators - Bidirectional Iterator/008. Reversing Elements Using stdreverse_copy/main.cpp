#include <iostream>
#include <forward_list>
#include <iterator>
#include <algorithm>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Reversed elements: ";
    std::reverse_copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\n";

    return 0;
}
