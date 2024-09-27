#include <iostream>
using namespace std;

template <typename T>
void func(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    func({1, 2, 3});  // Error: cannot deduce type for an initializer list
    return 0;
}
