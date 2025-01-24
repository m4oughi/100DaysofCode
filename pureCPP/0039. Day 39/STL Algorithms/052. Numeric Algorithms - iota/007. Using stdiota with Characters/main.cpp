#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<char> letters(5);
    std::iota(letters.begin(), letters.end(), 'A');

    std::cout << "Alphabet sequence: ";
    for (char c : letters) {
        std::cout << c << " ";
    }
    std::cout << "\n"; // Output: A B C D E

    return 0;
}
