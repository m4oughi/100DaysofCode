#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<std::string> words = {"Hello", " ", "World", "!"};
    std::string result = std::accumulate(words.begin(), words.end(), std::string());

    std::cout << "Concatenated string: " << result << "\n"; // Output: Hello World!
    return 0;
}
