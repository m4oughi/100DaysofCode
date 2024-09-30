#include <iostream>
using namespace std;

class Math {
public:
    // Static member function
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    // Calling static member function without creating an object
    cout << "Sum: " << Math::add(5, 3) << endl;
    return 0;
}
