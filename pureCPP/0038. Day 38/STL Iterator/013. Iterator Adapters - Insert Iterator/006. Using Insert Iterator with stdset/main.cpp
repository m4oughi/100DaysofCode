#include <iostream>
#include <set>
#include <iterator>

int main() {
    std::set<int> numbers = {1, 2, 3};
    std::set<int> new_numbers = {4, 5, 6};

    auto it = std::insert_iterator<std::set<int>>(numbers, numbers.end());

    std::copy(new_numbers.begin(), new_numbers.end(), it);

    std::cout << "Set after insertion: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
