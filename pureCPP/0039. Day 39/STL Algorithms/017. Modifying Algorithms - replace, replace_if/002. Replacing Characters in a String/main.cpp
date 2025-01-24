#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "hello world";
    
    std::replace(str.begin(), str.end(), 'o', '0');

    std::cout << "After replace: " << str << std::endl;

    return 0;
}
