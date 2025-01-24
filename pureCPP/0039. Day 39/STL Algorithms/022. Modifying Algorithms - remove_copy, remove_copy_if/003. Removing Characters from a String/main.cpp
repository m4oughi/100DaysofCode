#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "hello, world!";
    std::string result;

    std::remove_copy(str.begin(), str.end(), std::back_inserter(result), ',');

    std::cout << "String after removing commas: " << result << std::endl;

    return 0;
}
