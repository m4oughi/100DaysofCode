#include <iostream>
#include <vector>
#include <algorithm>  // for std::remove

int main() {
    std::vector<int> numbers = {10, 20, 30, 20, 40, 20, 50};

    numbers.erase(std::remove(numbers.begin(), numbers.end(), 20), numbers.end());

    std::cout << "Elements after erasing all occurrences of 20:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
