#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};

    std::cout << "Even numbers: ";
    std::copy_if(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "), [](int n) {
        return n % 2 == 0;
    });
    std::cout << "\n";

    return 0;
}
