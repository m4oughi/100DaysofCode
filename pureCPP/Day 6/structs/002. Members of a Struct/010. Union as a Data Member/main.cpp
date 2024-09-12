#include <iostream>

struct Variant {
    union {
        int intValue;
        float floatValue;
        char charValue;
    };
    enum Type { INT, FLOAT, CHAR } type;
};


int main() {


    return 0;
}