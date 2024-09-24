#include <iostream>

class A;

class B {
public:
    void display(const A& a);
};

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Declare B as a friend class
    friend class B;

    // Friend function declaration
    friend void printValue(const A& a);
};

// Friend function definition
void printValue(const A& a) {
    std::cout << "Value of A: " << a.value << std::endl;
}

// Member function of class B (friend class)
void B::display(const A& a) {
    std::cout << "Displaying value from class B: " << a.value << std::endl;
}

int main() {
    A objA(100);
    B objB;

    printValue(objA);  // Friend function accessing private member of A
    objB.display(objA);  // Friend class accessing private member of A

    return 0;
}
