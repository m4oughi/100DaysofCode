#include <iostream>
#include <string>
#include <algorithm>
#include <random>

int main() {
    std::string sentence = "C++ is powerful";
    std::string chars_only;

    // Extract characters (excluding spaces)
    for (char ch : sentence) {
        if (ch != ' ') chars_only += ch;
    }

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(chars_only.begin(), chars_only.end(), generator);

    // Reinsert spaces
    size_t index = 0;
    for (char& ch : sentence) {
        if (ch != ' ') {
            ch = chars_only[index++];
        }
    }

    std::cout << "Shuffled sentence: " << sentence << std::endl;

    return 0;
}
