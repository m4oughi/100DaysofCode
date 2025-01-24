#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string word = "cba";

    if (std::prev_permutation(word.begin(), word.end())) {
        std::cout << "Previous permutation: " << word << "\n";
    } else {
        std::cout << "No previous permutation exists.\n";
    }
    // Output: Previous permutation: cab
}
