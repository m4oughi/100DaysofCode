#include <iostream>

using namespace std;

void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) { // Base Case: move one disk
        cout << "Move disk 1 from " << fromRod << " to " << toRod << endl;
        return;
    }

    towerOfHanoi(n - 1, fromRod, auxRod, toRod);  // Recursive Case 1: move n-1 disks
    cout << "Move disk " << n << " from " << fromRod << " to " << toRod << endl;
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);  // Recursive Case 2: move n-1 disks
}
