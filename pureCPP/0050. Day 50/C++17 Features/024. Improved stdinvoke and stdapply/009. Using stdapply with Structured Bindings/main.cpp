#include <iostream>
#include <tuple>
#include <functional>

void display(int a, double b, const std::string &c) {
    std::cout << "Int: " << a << ", Double: " << b << ", String: " << c << "\n";
}

int main() {
    std::tuple<int, double, std::string> data{42, 3.14, "C++17"};
    
    std::apply(display, data); // Unpacks tuple into display function
    
    return 0;
}
