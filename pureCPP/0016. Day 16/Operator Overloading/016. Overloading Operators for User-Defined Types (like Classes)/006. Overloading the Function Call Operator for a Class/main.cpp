#include <iostream>
using namespace std;

class Multiplier {
    int factor;
public:
    Multiplier(int f = 1) : factor(f) {}

    // Overloading the () operator
    int operator()(int x) {
        return factor * x;
    }
};

int main() {
    Multiplier times2(2);
    Multiplier times3(3);

    cout << "2 times 5 = " << times2(5) << endl;  // Output: 2 times 5 = 10
    cout << "3 times 7 = " << times3(7) << endl;  // Output: 3 times 7 = 21

    return 0;
}
