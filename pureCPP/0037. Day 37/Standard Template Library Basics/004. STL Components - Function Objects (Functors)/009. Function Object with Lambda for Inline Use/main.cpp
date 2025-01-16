#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 15, 20, 25, 30};
    int count = std::count_if(numbers.begin(), numbers.end(), [](int num) { return num % 10 == 0; });

    std::cout << "Count of multiples of 10: " << count << std::endl;
    return 0;
}
