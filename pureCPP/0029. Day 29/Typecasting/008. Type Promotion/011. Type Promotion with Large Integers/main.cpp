#include <iostream>
using namespace std;

int main() {
    unsigned long long largeValue = 10000000000ULL;
    int smallValue = 42;

    // Promote int to unsigned long long
    unsigned long long result = largeValue + smallValue;

    cout << "Result: " << result << endl;  // 10000000042
    return 0;
}
