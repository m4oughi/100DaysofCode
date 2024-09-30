#include <iostream>
using namespace std;

class Math {
public:
    // Static member function, accessible without an object
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    cout << "Sum: " << Math::add(5, 3) << endl;  // Calling static member function
    return 0;
}
