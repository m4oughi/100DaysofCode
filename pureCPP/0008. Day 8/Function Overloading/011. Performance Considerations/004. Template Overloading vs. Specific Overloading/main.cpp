#include <iostream>
using namespace std;

class Operations {
public:
    // Specific overload for int
    void process(int a) {
        cout << "Processing int: " << a << endl;
    }

    // Template overload
    template <typename T>
    void process(T a) {
        cout << "Processing generic type: " << a << endl;
    }
};

int main() {
    Operations ops;
    ops.process(5);          // Calls the specific overload for int
    ops.process(5.5);        // Calls the template overload for double
    return 0;
}
