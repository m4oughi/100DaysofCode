#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> source = {10, 20, 30, 40, 50};

    std::cout << "First 3 elements: ";
    std::copy_n(source.begin(), 3, std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
