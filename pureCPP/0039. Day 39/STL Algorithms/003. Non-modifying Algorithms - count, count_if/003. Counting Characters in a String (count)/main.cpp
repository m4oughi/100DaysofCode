#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "hello world";

    int countL = std::count(text.begin(), text.end(), 'l');

    std::cout << "The character 'l' appears " << countL << " times." << std::endl;

    return 0;
}
