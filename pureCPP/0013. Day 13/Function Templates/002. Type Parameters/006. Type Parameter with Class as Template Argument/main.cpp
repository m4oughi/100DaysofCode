#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void printVector(vector<T>& vec) {
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> intVec = {1, 2, 3, 4, 5};
    vector<string> strVec = {"Hello", "World"};

    printVector(intVec);
    printVector(strVec);

    return 0;
}
