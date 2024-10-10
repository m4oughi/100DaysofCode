#include "A.h"
#include <iostream>
using namespace std;

// Inline friend function defined in the source file
inline void showValue(A& obj) {
    cout << "A's value: " << obj.value << endl;
}
