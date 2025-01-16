#include <iostream>

class Increment {
    int value;

public:
    Increment(int val) : value(val) {}
    int operator()(int num) const {
        return num + value;
    }
};

int main() {
    Increment incrementBy5(5);
    std::cout << "Increment 10 by 5: " << incrementBy5(10) << std::endl;
    return 0;
}
