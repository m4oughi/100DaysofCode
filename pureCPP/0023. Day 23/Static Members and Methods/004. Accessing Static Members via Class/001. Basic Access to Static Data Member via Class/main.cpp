#include <iostream>
using namespace std;

class Test {
public:
    static int sharedValue;  // Static data member
};

// Initialize static data member
int Test::sharedValue = 100;

int main() {
    // Access static data member using class name
    cout << "Shared value: " << Test::sharedValue << endl;  // Output: 100
    return 0;
}
