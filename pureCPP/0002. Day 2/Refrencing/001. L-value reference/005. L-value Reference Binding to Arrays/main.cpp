#include <iostream>

int main () {
    int arr[] = {1, 2, 3};
    int &ref = arr[0];  // ref refers to arr[0]
    ref = 100;  // Changes arr[0] to 100
    
    return 0;
}