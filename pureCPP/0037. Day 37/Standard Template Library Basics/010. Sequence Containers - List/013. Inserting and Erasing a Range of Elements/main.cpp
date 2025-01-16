#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};
    std::list<int> newNumbers = {6, 7, 8};

    auto it = numbers.begin();
    std::advance(it, 2); // Move iterator to the third position

    numbers.insert(it, newNumbers.begin(), newNumbers.end()); // Insert entire newNumbers list

    it = numbers.begin();
    std::advance(it, 3); // Move iterator to the fourth position
    auto endIt = it;
    std::advance(endIt, 2); // Move endIt to 6th position
    numbers.erase(it, endIt); // Erase a range from 4th to 6th position

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
