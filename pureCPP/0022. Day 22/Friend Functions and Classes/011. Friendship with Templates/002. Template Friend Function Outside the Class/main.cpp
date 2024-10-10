#include <iostream>
using namespace std;

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // Friend function declaration
    friend void showValue(A<T>& obj);
};

// Friend function definition outside the class
template <typename T>
void showValue(A<T>& obj) {
    cout << "A's value: " << obj.value << endl;
}

int main() {
    A<int> objA(100);
    A<double> objB(200.5);

    showValue(objA);  // Friend function defined outside the class
    showValue(objB);

    return 0;
}
