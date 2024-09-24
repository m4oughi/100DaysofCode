#include <iostream>
using namespace std;

void compute(int a, int& result) {
    result = a * 2;
}

void compute(int a, double& result) {
    result = a * 2.5;
}

int main() {
    int intResult;
    double doubleResult;

    compute(10, intResult);       // Calls compute(int, int&)
    compute(10, doubleResult);    // Calls compute(int, double&)

    cout << "Integer Result: " << intResult << endl;
    cout << "Double Result: " << doubleResult << endl;

    return 0;
}
