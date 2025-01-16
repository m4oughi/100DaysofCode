#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    auto start = numbers.begin();
    auto end = numbers.end();

    std::cout << "Distance: " << std::distance(start, end) << std::endl;
    return 0;
}
