#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

int main() {
    std::string sentence = "C++ is powerful";
    std::istringstream stream(sentence);
    std::vector<std::string> words;

    std::copy(std::istream_iterator<std::string>(stream), std::istream_iterator<std::string>(), std::back_inserter(words));

    std::reverse(words.begin(), words.end());

    std::cout << "Sentence after reversing words: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
