#include <iostream>
using namespace std;

template <typename T>
class B;

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // Declare B<T> as a friend class
    friend class B<T>;
};

template <typename T>
class B {
public:
    void showA(A<T>& obj) {
        cout << "A's value: " << obj.value << endl;  // B<T> can access A<T>'s private members
    }
};

int main() {
    A<int> objA(100);
    B<int> objB;

    objB.showA(objA);  // B<int> accesses A<int>'s private members

    return 0;
}
