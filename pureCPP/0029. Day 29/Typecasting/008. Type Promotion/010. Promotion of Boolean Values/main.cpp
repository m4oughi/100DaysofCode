#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    int value = 10 + flag;  // bool is promoted to int (true becomes 1)

    cout << "Result: " << value << endl;  // 11
    return 0;
}
