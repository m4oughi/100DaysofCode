#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string source = "Hello";
    std::string destination(source.size(), ' ');

    std::copy_backward(source.begin(), source.end(), destination.end());

    std::cout << "Reversed string: " << destination << std::endl;

    return 0;
}
