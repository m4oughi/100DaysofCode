#include <iostream>
#include <utility>

int main() {
    std::pair<int, std::string> p(42, "Answer");

    int number;
    std::string text;
    std::tie(number, text) = p;

    std::cout << "Number: " << number << "\n";
    std::cout << "Text: " << text << "\n";

    return 0;
}
