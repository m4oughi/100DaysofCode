#include <iostream>
using namespace std;

enum Status { SUCCESS, FAILURE };

void report(int a) {
    cout << "Reporting integer: " << a << endl;
}

void report(Status s) {
    cout << "Reporting status" << endl;
}

int main() {
    report(SUCCESS);  // Ambiguous: Enum can be promoted to int or used directly
    return 0;
}
