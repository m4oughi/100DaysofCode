#include <iostream>
#include <string>

int main() {
    int num = 42;
    double pi = 3.14159;
    
    std::string str1 = std::to_string(num);
    std::string str2 = std::to_string(pi);

    std::cout << "Integer to string: " << str1 << "\n";
    std::cout << "Double to string: " << str2 << "\n";

    return 0;
}
