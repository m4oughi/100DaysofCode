#include <iostream>
using namespace std;

class FunctionCounter {
public:
    static int callCount;  // Static member to track number of function calls

    static void incrementCall() {
        callCount++;
    }
};

// Initialize static member
int FunctionCounter::callCount = 0;

void callFunction() {
    FunctionCounter::incrementCall();
}

int main() {
    callFunction();
    callFunction();
    callFunction();

    // Static member retains its value across function calls
    cout << "Function called: " << FunctionCounter::callCount << " times" << endl;  // Output: 3
    return 0;
}
