#include <iostream>

constexpr int getNumber() {
    return 42;
}

constexpr double getPi() {
    return 3.1415926535;
}

int main() {
    constexpr int num = getNumber(); 
    constexpr double pi = getPi(); 

    std::cout << "Number: " << num << ", Pi: " << pi << '\n';
    return 0;
}
