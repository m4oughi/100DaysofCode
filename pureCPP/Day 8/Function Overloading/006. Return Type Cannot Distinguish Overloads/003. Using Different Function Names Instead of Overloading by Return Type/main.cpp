#include <iostream>
using namespace std;

int computeInt(int a) {
    return a * 2;
}

double computeDouble(int a) {
    return a * 2.5;
}

int main() {
    int intResult = computeInt(10);
    double doubleResult = computeDouble(10);
    cout << "Integer Result: " << intResult << endl;
    cout << "Double Result: " << doubleResult << endl;
    return 0;
}
