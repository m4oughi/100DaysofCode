#include <iostream>
using namespace std;

template<typename T>
void print(T value) {
    cout << "Generic template: " << value << endl;
}

void print(int value) {
    cout << "Non-template function for int: " << value << endl;
}

int main() {
    print(5);        // Calls non-template version for int
    print(5.5);      // Calls template version for double
    print("Hello");  // Calls template version for string

    return 0;
}
