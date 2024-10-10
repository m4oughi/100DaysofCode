#include <iostream>
using namespace std;

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // Inline friend function declaration
    friend void showValue(A<T>& obj) {
        cout << "A's value: " << obj.value << endl;
    }
};

int main() {
    A<int> objA(100);
    A<double> objB(200.5);

    showValue(objA);  // Inline friend function for integer type
    showValue(objB);  // Inline friend function for double type

    return 0;
}
