#include <iostream>
using namespace std;

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // General friend function declaration
    friend void showValue(A<T>& obj);

    // Specialized friend function declaration for A<int>
    friend void showValue(A<int>& obj);
};

// General friend function definition
template <typename T>
void showValue(A<T>& obj) {
    cout << "General template: A's value: " << obj.value << endl;
}

// Specialized friend function definition for A<int>
void showValue(A<int>& obj) {
    cout << "Specialized for int: A's value: " << obj.value << endl;
}

int main() {
    A<int> objA(100);
    A<double> objB(200.5);

    showValue(objA);  // Calls the specialized function for A<int>
    showValue(objB);  // Calls the general function

    return 0;
}
