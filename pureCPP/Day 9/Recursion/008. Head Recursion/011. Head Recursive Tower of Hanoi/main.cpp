#include <iostream>

using namespace std;

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0)
        return;

    towerOfHanoi(n - 1, from, aux, to);  // Head recursion: move n-1 disks first
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);  // Head recursion: move n-1 disks from aux to to
}
