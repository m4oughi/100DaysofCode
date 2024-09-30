#include <iostream>
using namespace std;

class Factorial {
public:
    // Inline recursive member function
    inline int calculate(int n) {
        return (n <= 1) ? 1 : n * calculate(n - 1);
    }
};

int main() {
    Factorial fact;
    cout << "Factorial of 5: " << fact.calculate(5) << endl;
    return 0;
}
