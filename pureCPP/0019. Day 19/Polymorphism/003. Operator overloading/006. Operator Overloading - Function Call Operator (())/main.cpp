#include <iostream>
using namespace std;

class Functor {
public:
    int operator()(int a, int b) {
        return a * b;
    }
};

int main() {
    Functor multiply;
    cout << "Result of multiplication: " << multiply(3, 4) << endl;

    return 0;
}
