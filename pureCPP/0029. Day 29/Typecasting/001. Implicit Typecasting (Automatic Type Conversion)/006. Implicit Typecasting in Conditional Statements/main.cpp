#include <iostream>
using namespace std;

int main() {
    int num = 5;
    if (num) {  // Implicitly converts int to bool (non-zero int becomes true)
        cout << "Condition is true!" << endl;
    }
    return 0;
}
