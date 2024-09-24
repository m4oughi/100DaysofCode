#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {20, 30, 40};

    numbers.insert(numbers.begin(), 10);  // Insert at the beginning
    numbers.insert(numbers.end(), 50);    // Insert at the end

    std::cout << "Elements after inserting at beginning and end:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
