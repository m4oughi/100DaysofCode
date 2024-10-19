#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int* ptr = static_cast<int*>(arr);  // Explicitly casting array to pointer
    cout << "First element: " << *ptr << endl;
    return 0;
}
