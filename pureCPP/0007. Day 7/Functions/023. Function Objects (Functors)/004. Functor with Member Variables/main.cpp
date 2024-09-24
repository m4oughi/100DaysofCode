#include <iostream>

class Incrementer {
private:
    int increment;

public:
    Incrementer(int inc) : increment(inc) {}

    int operator()(int value) const {
        return value + increment;
    }
};

int main() {
    Incrementer inc10(10);
    std::cout << "Value + 10 = " << inc10(5) << std::endl;  // Output: Value + 10 = 15
    return 0;
}
