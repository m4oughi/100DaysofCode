#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    auto rbegin = numbers.rbegin();
    auto rend = numbers.rend();

    std::cout << "Distance between reverse begin and end: "
              << std::distance(rbegin, rend) << std::endl;

    return 0;
}
