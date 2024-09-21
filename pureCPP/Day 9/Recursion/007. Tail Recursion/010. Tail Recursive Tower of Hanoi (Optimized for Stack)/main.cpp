#include <iostream>

using namespace std;

void towerOfHanoiHelper(int n, char from, char to, char aux, string accumulator) {
    if (n == 0)
        return;

    towerOfHanoiHelper(n - 1, from, aux, to, accumulator);  // Tail recursion to move n-1 disks

    cout << "Move disk " << n << " from " << from << " to " << to << endl;

    towerOfHanoiHelper(n - 1, aux, to, from, accumulator);  // Tail recursion to move n-1 disks
}

void towerOfHanoi(int n) {
    towerOfHanoiHelper(n, 'A', 'C', 'B', "");  // Empty accumulator initially
}
