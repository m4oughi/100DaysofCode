#include <iostream>

int main() {
    int a = 10, b = 20, c = 30;
    int* arr[3] = {&a, &b, &c};  // Array of pointers, each pointing to an integer
    int first = *arr[0];  // Dereferencing the first pointer in the array, gives 10
    int second = *arr[1];  // Dereferencing the second pointer in the array, gives 20

}