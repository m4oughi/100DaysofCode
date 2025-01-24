#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> source = {100, 200, 300, 400};

    std::cout << "Reversed output: ";
    std::copy_backward(source.begin(), source.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
