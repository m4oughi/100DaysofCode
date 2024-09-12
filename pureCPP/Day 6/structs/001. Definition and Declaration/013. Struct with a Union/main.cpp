#include <iostream>

struct Data {
    union {
        int intValue;
        float floatValue;
    };
    bool isInt;
};


int main() {

    return 0;
}