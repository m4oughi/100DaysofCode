#include <iostream>

using namespace std;

void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) { // Base Case
        cout << "Move disk 1 from " << fromRod << " to " << toRod << endl;
        return;
    }
    towerOfHanoi(n - 1, fromRod, auxRod, toRod); // Move n-1 disks from 'fromRod' to 'auxRod'
    cout << "Move disk " << n << " from " << fromRod << " to " << toRod << endl;
    towerOfHanoi(n - 1, auxRod, toRod, fromRod); // Move n-1 disks from 'auxRod' to 'toRod'
}
