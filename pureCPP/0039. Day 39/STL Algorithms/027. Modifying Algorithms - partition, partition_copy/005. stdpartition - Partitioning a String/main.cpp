#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "partitionexample";

    auto is_vowel = [](char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    };

    std::partition(str.begin(), str.end(), is_vowel);

    std::cout << "Partitioned string: " << str << std::endl;

    return 0;
}
