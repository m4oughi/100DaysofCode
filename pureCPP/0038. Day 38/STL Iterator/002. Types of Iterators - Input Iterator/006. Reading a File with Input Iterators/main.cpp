#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

int main() {
    std::ifstream file("numbers.txt");

    if (!file) {
        std::cerr << "File could not be opened." << std::endl;
        return 1;
    }

    std::istream_iterator<int> input(file);
    std::istream_iterator<int> end;

    std::vector<int> numbers(input, end);

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
