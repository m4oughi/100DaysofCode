#include <iostream>
#include <string>

class Concatenate {
public:
    std::string operator()(const std::string& str1, const std::string& str2) const {
        return str1 + str2;
    }
};

int main() {
    Concatenate concat;
    std::cout << concat("Hello, ", "World!") << "\n";
    return 0;
}
