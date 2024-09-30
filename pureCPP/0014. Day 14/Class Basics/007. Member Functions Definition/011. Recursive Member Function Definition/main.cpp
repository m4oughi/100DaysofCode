#include <iostream>
using namespace std;

class Factorial {
public:
    // Recursive member function
    int calculateFactorial(int n) {
        if (n <= 1)
            return 1;
        return n * calculateFactorial(n - 1);
    }
};

int main() {
    Factorial fact;
    cout << "Factorial of 5: " << fact.calculateFactorial(5) << endl;
    return 0;
}
