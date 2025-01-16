#include <iostream>
#include <forward_list>
#include <algorithm>

int main() {
    std::forward_list<int> numbers = {1, 2, 2, 3, 4, 2, 5};

    int count = std::count(numbers.begin(), numbers.end(), 2);

    std::cout << "Number 2 appears " << count << " times.\n";
    return 0;
}
