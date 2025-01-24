#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str = "abc";

    if (std::next_permutation(str.begin(), str.end())) {
        std::cout << "Next permutation: " << str << "\n"; // Output: Next permutation: acb
    } else {
        std::cout << "No next permutation exists.\n";
    }
}
