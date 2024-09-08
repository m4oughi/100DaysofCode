#include <iostream>

class MyClass {
public:
    int getValue() const {
        return value; // This function cannot modify member variables
    }

private:
    int value = 10;
};


int main() {


    return 0;
}