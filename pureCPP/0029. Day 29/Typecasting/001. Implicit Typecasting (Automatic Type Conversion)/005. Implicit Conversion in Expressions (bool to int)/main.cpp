#include <iostream>
using namespace std;

int main() {
    bool flag = true;  // true is implicitly converted to 1
    int result = flag + 10;  // Implicitly converts bool to int (true to 1)
    cout << "Result: " << result << endl;
    return 0;
}
