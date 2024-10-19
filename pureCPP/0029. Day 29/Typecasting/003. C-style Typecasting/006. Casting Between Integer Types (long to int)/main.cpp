#include <iostream>
using namespace std;

int main() {
    long largeNumber = 1000000;
    int smallerNumber = (int)largeNumber;  // C-style casting from long to int
    cout << "Casted value: " << smallerNumber << endl;
    return 0;
}
