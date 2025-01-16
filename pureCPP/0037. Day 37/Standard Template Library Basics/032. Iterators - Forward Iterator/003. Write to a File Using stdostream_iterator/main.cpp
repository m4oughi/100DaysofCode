#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    std::ofstream outFile("output.txt");
    if (!outFile) {
        std::cerr << "Failed to open file.\n";
        return 1;
    }

    std::ostream_iterator<int> fileOutput(outFile, "\n");
    std::copy(numbers.begin(), numbers.end(), fileOutput);

    std::cout << "Data written to output.txt\n";
    return 0;
}
