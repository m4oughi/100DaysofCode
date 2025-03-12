#include <iostream>
#include <string>

class CustomString {
    std::string str;
public:
    CustomString(const std::string& s) : str(s) {}
    void print() const {
        std::cout << "Custom string: " << str << '\n';
    }
};

CustomString operator"" _cs(const char* s, std::size_t) {
    return CustomString(s);
}

int main() {
    auto myString = "Hello, UDL!"_cs;
    myString.print();
    return 0;
}
