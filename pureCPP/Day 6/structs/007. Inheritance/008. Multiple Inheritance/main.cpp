#include <iostream>

struct Base1 {
    int x;
};

struct Base2 {
    int y;
};

struct Derived : public Base1, public Base2 {
    int z;
};

int main() {


    return 0;
}