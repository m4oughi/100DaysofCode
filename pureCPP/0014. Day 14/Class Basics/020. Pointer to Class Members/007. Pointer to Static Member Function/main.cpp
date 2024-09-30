#include <iostream>
using namespace std;

class Calculator {
public:
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    // Pointer to static member function
    int (*addPtr)(int, int) = &Calculator::add;

    // Calling the static member function via pointer
    int result = addPtr(5, 10);
    cout << "Sum: " << result << endl;

    return 0;
}
