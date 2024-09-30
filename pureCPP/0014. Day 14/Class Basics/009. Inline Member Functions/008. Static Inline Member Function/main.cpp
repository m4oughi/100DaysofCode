#include <iostream>
using namespace std;

class Math {
public:
    // Static inline member function
    inline static int square(int x) {
        return x * x;
    }
};

int main() {
    cout << "Square of 4: " << Math::square(4) << endl;  // Calling static inline function
    return 0;
}
