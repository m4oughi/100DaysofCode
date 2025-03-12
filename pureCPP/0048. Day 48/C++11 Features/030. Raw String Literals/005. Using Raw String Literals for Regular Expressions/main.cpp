#include <iostream>
#include <regex>

int main() {
    std::string pattern = R"(\d{3}-\d{2}-\d{4})"; // Matches SSN format (123-45-6789)
    std::regex regex_pattern(pattern);

    std::string test = "My SSN is 123-45-6789.";
    if (std::regex_search(test, regex_pattern)) {
        std::cout << "Match found!" << std::endl;
    } else {
        std::cout << "No match found!" << std::endl;
    }

    return 0;
}
