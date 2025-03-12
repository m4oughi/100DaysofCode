#include <iostream>

int main() {
    std::string custom_delimiter = R"DELIM(Using special delimiters like () in raw strings.)DELIM";
    
    std::cout << custom_delimiter << std::endl;
    return 0;
}
