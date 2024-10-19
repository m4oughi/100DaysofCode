#include <iostream>
using namespace std;

class Sample {
public:
    void func() {
        cout << "Non-const function." << endl;
    }

    void func() const {
        cout << "Const function." << endl;
    }
};

int main() {
    const Sample obj;
    const_cast<Sample&>(obj).func();  // Calls non-const version of func()
    return 0;
}
