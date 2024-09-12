#include <iostream>

struct Container {
    struct {
        int a;
        int b;
    };
};

int main() {
    Container c;
    c.a = 1;
    c.b = 2;
    
    std::cout << "a: " << c.a << ", b: " << c.b << std::endl;
}
