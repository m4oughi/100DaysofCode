#include <iostream>
#include <vector>
using namespace std;

class DataManager {
public:
    static vector<int> data;  // Static member with complex data type

    static void addData(int value) {
        data.push_back(value);  // Modify static member
    }

    static void showData() {
        for (int v : data) {
            cout << v << " ";
        }
        cout << endl;
    }
};

// Initialize static member with complex data
vector<int> DataManager::data = {1, 2, 3};

int main() {
    DataManager::showData();  // Output: 1 2 3

    DataManager::addData(4);
    DataManager::showData();  // Output: 1 2 3 4

    return 0;
}
