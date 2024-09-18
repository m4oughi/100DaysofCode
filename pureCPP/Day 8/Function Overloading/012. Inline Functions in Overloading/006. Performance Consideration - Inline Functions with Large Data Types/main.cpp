#include <iostream>
#include <vector>
using namespace std;

class Operations {
public:
    // Inline function with vector passed by reference
    inline void process(const vector<int>& v) {
        cout << "Processing large vector. Size: " << v.size() << endl;
    }

    // Inline function with vector passed by value (less efficient)
    inline void process(vector<int> v) {
        cout << "Processing and copying vector. Size: " << v.size() << endl;
    }
};

int main() {
    vector<int> largeVec(100000, 1);
    Operations ops;

    ops.process(largeVec);  // Efficient: Pass-by-reference
    ops.process(vector<int>(100000, 2));  // Less efficient: Pass-by-value
    return 0;
}
