#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string source = "Hello, World!";
    std::string destination(5, ' '); // Initialize with 5 spaces

    std::copy_n(source.begin(), 5, destination.begin());

    std::cout << "Copied string: " << destination << std::endl;

    return 0;
}
