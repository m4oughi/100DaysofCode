#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "date"};

    int countLength5 = std::count_if(words.begin(), words.end(), [](const std::string& word) {
        return word.length() == 5;
    });

    std::cout << "There are " << countLength5 << " words with 5 letters." << std::endl;

    return 0;
}
