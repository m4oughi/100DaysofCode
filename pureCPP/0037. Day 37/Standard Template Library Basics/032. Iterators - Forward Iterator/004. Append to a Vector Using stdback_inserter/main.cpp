#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    std::vector<int> toAppend = {4, 5, 6};

    std::copy(toAppend.begin(), toAppend.end(), std::back_inserter(numbers));

    std::cout << "Appended vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
