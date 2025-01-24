#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};

    std::cout << "Copied elements: ";
    std::copy(source.begin(), source.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
