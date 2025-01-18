#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

int main() {
    std::ofstream file("output.txt");
    if (!file) {
        std::cerr << "Failed to open file.\n";
        return 1;
    }

    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(file, "\n"));

    std::cout << "Numbers written to output.txt\n";
    return 0;
}
