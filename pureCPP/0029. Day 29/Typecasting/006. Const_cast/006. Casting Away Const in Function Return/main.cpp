#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}

    int& getValue() const {
        return const_cast<int&>(value);  // Remove const to return a modifiable reference
    }
};

int main() {
    const Test obj(10);
    int& val = obj.getValue();  // Get modifiable reference
    val = 30;  // Modify the value

    cout << "Modified value: " << val << endl;
    return 0;
}
