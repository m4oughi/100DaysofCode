#include <iostream>

using namespace std;

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0)
        return;

    towerOfHanoi(n - 1, from, aux, to);  // Recursive depth is linear
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);  // Recursive depth is linear
}
