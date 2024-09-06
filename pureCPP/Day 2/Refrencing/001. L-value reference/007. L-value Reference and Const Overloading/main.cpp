#include <iostream>

void print(const int &val) {
    std::cout << "Const reference: " << val << std::endl;
}

void print(int &val) {
    std::cout << "Non-const reference: " << val << std::endl;
}

int main () {
    int x = 10;
    const int y = 20;
    print(x);  // Calls non-const version
    print(y);  // Calls const version
    
    return 0;
}