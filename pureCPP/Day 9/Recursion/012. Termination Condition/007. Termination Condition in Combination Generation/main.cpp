#include <iostream>
#include <vector>
using namespace std;

void printCombinations(vector<int>& comb, int n, int k, int index, int start) {
    if (index == k) {  // Termination condition: Combination is complete
        for (int i = 0; i < k; i++)
            cout << comb[i] << " ";
        cout << endl;
        return;
    }

    for (int i = start; i <= n; i++) {
        comb[index] = i;
        printCombinations(comb, n, k, index + 1, i + 1);
    }
}

int main() {
    int n = 5, k = 3;
    vector<int> comb(k);
    printCombinations(comb, n, k, 0, 1);
    return 0;
}
