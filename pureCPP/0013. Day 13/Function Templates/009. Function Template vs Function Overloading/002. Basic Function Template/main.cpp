#include <iostream>
using namespace std;

template <typename T>
void print(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    print(10);      // Instantiates template for int
    print(3.14);    // Instantiates template for double
    return 0;
}
