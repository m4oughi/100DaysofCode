#include <iostream>
#include <vector>
using namespace std;

int rodCutting(vector<int>& prices, int n) {
    if (n <= 0)
        return 0;

    int max_val = INT_MIN;

    for (int i = 0; i < n; i++)
        max_val = max(max_val, prices[i] + rodCutting(prices, n - i - 1));

    return max_val;
}

int main() {
    vector<int> prices = {1, 5, 8, 9, 10, 17, 17, 20};  // Prices for lengths 1 to 8
    int n = prices.size();
    cout << "Maximum value obtainable = " << rodCutting(prices, n) << endl;
    return 0;
}
