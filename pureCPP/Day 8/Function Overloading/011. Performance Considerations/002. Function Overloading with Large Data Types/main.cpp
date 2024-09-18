#include <iostream>
#include <vector>
using namespace std;

class Operations {
public:
    // Overloaded function using pass-by-value
    void process(vector<int> v) {
        cout << "Processing vector by value. Size: " << v.size() << endl;
    }

    // Overloaded function using pass-by-reference
    void process(const vector<int>& v) {
        cout << "Processing vector by reference. Size: " << v.size() << endl;
    }
};

int main() {
    vector<int> vec(100000, 1);  // Large vector
    Operations ops;
    
    ops.process(vec);             // Pass-by-reference is faster
    ops.process(vector<int>(100000, 2));  // Temporary object, pass-by-value
    return 0;
}
