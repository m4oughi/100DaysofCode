#include <iostream>

struct Outer {
    struct Inner {
        static int staticInnerValue;
    };
};

int Outer::Inner::staticInnerValue = 50;

int main() {
    std::cout << "Static Inner Value: " << Outer::Inner::staticInnerValue << std::endl;
}
