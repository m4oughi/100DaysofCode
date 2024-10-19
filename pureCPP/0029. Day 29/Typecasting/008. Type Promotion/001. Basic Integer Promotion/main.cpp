#include <iostream>
using namespace std;

int main() {
    char c = 10;  // char type
    int result = c + 100;  // char is promoted to int

    cout << "Result: " << result << endl;  // 110
    return 0;
}
