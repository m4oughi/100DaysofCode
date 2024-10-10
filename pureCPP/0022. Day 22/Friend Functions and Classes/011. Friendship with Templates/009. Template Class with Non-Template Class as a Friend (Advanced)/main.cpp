#include <iostream>
using namespace std;

class B;

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // Declare non-template class as friend
    friend class B;
};

class B {
public:
    template <typename T>
    void showA(A<T>& obj) {
        cout << "A's value: " << obj.value << endl;
    }
};

int main() {
    A<int> objA(100);
    A<double> objB(200.5);

    B objB1;
    objB1.showA(objA);  // B can access both A<int> and A<double>'s private members
    objB1.showA(objB);

    return 0;
}
