#include <iostream>
using namespace std;

class SwapNumbers {
public:
    // Inline member function using references
    inline void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    SwapNumbers sn;
    int x = 5, y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    sn.swap(x, y);  // Inline swap function
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
