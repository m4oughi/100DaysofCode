#include <iostream>
#include <iterator>

int main() {
    std::ostream_iterator<int> output(std::cout, " ");
    *output = 10;
    *output = 20;
    *output = 30;

    std::cout << "\n";
    return 0;
}
