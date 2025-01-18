#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

int main() {
    std::ifstream file("numbers.txt");
    if (!file) {
        std::cerr << "Failed to open file.\n";
        return 1;
    }

    std::vector<int> numbers((std::istream_iterator<int>(file)), std::istream_iterator<int>());

    std::cout << "Numbers from file: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
