#include <iostream>
using namespace std;

int main() {
    unsigned int u = 3000;
    int i = -2000;

    int result = u + i;  // unsigned int is promoted to int

    cout << "Result: " << result << endl;  // 1000
    return 0;
}
