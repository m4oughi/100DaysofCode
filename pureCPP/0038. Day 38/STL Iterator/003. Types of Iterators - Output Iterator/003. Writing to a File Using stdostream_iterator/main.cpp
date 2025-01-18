#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::ofstream file("output.txt");
    if (!file) {
        std::cerr << "File could not be opened." << std::endl;
        return 1;
    }

    std::ostream_iterator<int> output(file, "\n"); // Output iterator for file
    for (const auto& num : numbers) {
        *output = num; // Writing numbers to file
    }

    std::cout << "Data written to output.txt" << std::endl;
    return 0;
}
