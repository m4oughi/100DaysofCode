#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int number = 1223334444;
    std::string numberStr = std::to_string(number);

    int countThrees = std::count(numberStr.begin(), numberStr.end(), '3');

    std::cout << "The digit '3' appears " << countThrees << " times." << std::endl;

    return 0;
}
