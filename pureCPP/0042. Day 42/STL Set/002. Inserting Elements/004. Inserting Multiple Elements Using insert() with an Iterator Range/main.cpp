#include <iostream>
#include <set>
#include <vector>

int main() {
    std::set<int> numbers = {1, 2, 3};
    std::vector<int> newNumbers = {4, 5, 6};

    numbers.insert(newNumbers.begin(), newNumbers.end());

    std::cout << "Set elements after inserting range: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
