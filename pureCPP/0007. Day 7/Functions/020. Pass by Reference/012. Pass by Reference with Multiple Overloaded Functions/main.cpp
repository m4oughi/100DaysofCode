#include <iostream>

void display(const int& x) {
    std::cout << "Integer: " << x << std::endl;
}

void display(const std::string& str) {
    std::cout << "String: " << str << std::endl;
}

int main() {
    int num = 10;
    std::string text = "Hello";
    
    display(num);   // Calls the integer version
    display(text);  // Calls the string version
    
    return 0;
}
