#include <iostream>

class Example {
private:
    int value;
    static int count;  // Static variable

public:
    Example(int v) : value(v) {
        count++;
    }

    // Static function cannot access non-static members
    static int getCount() {
        return count;  // Can only access static members
    }
};

int Example::count = 0;

int main() {
    Example ex1(10);
    Example ex2(20);

    std::cout << "Total objects created: " << Example::getCount() << std::endl;

    return 0;
}
