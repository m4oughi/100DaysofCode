#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sentence = "beautiful scenery";
    std::string result;

    std::unique_copy(sentence.begin(), sentence.end(), std::back_inserter(result), [](char a, char b) {
        std::string vowels = "aeiouAEIOU";
        return vowels.find(a) != std::string::npos && a == b; // Check consecutive vowels
    });

    std::cout << "Sentence after removing consecutive duplicate vowels: " << result << std::endl;

    return 0;
}
