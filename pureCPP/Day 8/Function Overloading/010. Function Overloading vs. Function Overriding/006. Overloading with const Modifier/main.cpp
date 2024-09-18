#include <iostream>
using namespace std;

class Test {
public:
    void show() {
        cout << "Non-const show function" << endl;
    }

    void show() const {
        cout << "Const show function" << endl;
    }
};

int main() {
    Test t;
    const Test ct;

    t.show();   // Calls non-const show()
    ct.show();  // Calls const show()
    return 0;
}
