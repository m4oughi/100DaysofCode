#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {2, 3, 5, 7, 11, 14, 17, 20};

    int count = std::count_if(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 == 0;
    });
    std::cout << "Count of even numbers: " << count << std::endl; // Outputs: Count of even numbers: 3

    return 0;
}
