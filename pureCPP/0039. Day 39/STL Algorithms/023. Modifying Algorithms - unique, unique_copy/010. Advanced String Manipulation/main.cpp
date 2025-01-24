#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    std::string sentence = "hello hello world world world unique unique example";
    std::istringstream stream(sentence);
    std::vector<std::string> words((std::istream_iterator<std::string>(stream)), std::istream_iterator<std::string>());

    auto new_end = std::unique(words.begin(), words.end());

    std::cout << "Sentence after removing consecutive duplicate words: ";
    for (auto it = words.begin(); it != new_end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
