#include <iostream>

using namespace std;

void towersOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) { // Base Case
        cout << "Move disk 1 from " << fromRod << " to " << toRod << endl;
        return;
    }

    towersOfHanoi(n - 1, fromRod, auxRod, toRod);
    cout << "Move disk " << n << " from " << fromRod << " to " << toRod << endl;
    towersOfHanoi(n - 1, auxRod, toRod, fromRod);
}
