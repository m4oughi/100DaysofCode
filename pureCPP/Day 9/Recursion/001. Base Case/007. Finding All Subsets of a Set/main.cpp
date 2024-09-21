#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findSubsets(vector<int> &set, vector<int> &current, int index) {
    if (index == set.size()) { // Base Case
        for (int num : current)
            cout << num << " ";
        cout << endl;
        return;
    }

    // Exclude the current element
    findSubsets(set, current, index + 1);

    // Include the current element
    current.push_back(set[index]);
    findSubsets(set, current, index + 1);

    // Backtrack
    current.pop_back();
}
