#include <iostream>
using namespace std;

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // Template friend function with different template parameters
    template <typename U>
    friend void showDifferent(A<U>& obj);
};

// Template friend function definition
template <typename U>
void showDifferent(A<U>& obj) {
    cout << "A's value: " << obj.value << endl;
}

int main() {
    A<int> objA(100);
    A<double> objB(200.5);

    showDifferent(objA);  // Friend function can work with different template types
    showDifferent(objB);

    return 0;
}
