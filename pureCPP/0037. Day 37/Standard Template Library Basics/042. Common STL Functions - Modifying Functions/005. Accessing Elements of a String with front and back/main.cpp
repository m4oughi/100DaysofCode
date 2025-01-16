#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    
    std::cout << "First character: " << str.front() << "\n";
    std::cout << "Last character: " << str.back() << "\n";

    str.front() = 'h'; // Modify first character
    str.back() = '!';  // Modify last character
    std::cout << "Modified string: " << str << "\n";

    return 0;
}
