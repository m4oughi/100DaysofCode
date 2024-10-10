#include <iostream>
using namespace std;

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // Declare specialized version of B<T> as friend
    template <typename U>
    friend class B;
};

template <typename T>
class B {
public:
    void showA(A<T>& obj) {
        cout << "A's value: " << obj.value << endl;
    }
};

template <>
class B<int> {
public:
    void showA(A<int>& obj) {
        cout << "Specialized B<int>: A's value: " << obj.value << endl;
    }
};

int main() {
    A<int> objA(100);
    A<double> objB(200.5);

    B<int> objB1;
    B<double> objB2;

    objB1.showA(objA);  // Specialized B<int> accessing A<int>
    objB2.showA(objB);  // General B<T> accessing A<double>

    return 0;
}
