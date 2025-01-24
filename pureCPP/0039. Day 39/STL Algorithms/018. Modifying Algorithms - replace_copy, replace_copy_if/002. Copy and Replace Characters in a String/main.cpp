#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "hello world";
    std::string result;

    std::replace_copy(str.begin(), str.end(), std::back_inserter(result), 'o', '0');

    std::cout << "Original string: " << str << "\nResult string: " << result << std::endl;

    return 0;
}
