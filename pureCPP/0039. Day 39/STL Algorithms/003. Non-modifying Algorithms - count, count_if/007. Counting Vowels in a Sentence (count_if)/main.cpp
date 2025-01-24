#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "This is a simple sentence.";

    int vowelCount = std::count_if(text.begin(), text.end(), [](char c) {
        char lower = std::tolower(c);
        return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
    });

    std::cout << "The number of vowels in the sentence is " << vowelCount << "." << std::endl;

    return 0;
}
