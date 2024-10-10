#ifndef A_H
#define A_H

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Friend function declaration
    friend void showValue(A& obj);
};

#endif
