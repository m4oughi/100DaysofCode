#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "date", "fig"};
    std::string target = "cherry";

    auto lower = std::lower_bound(words.begin(), words.end(), target);
    auto upper = std::upper_bound(words.begin(), words.end(), target);

    std::cout << "Lower bound for '" << target << "': " << (lower - words.begin()) << "\n";
    std::cout << "Upper bound for '" << target << "': " << (upper - words.begin()) << "\n";
    return 0;
}
