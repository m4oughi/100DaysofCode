#include <iostream>

const std::string& getTempString() {
    static const std::string temp = "Hello, World!";  // Static const string
    return temp;  // Safe: returning const reference to static object
}

int main() {
    const std::string &ref = getTempString();  // ref is a const reference to the static object
    std::cout << ref << std::endl;  // Output: Hello, World!


    return 0;
}