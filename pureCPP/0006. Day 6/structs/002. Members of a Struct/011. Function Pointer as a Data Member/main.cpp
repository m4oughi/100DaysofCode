#include <iostream>

struct Operation {
    int (*func)(int, int);

    int execute(int a, int b) {
        return func(a, b);
    }
};


int main() {


    return 0;
}