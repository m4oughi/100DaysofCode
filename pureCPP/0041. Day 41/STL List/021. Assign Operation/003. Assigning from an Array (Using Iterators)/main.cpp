#include <iostream>
#include <list>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    std::list<int> myList;

    myList.assign(arr, arr + 5); // Assign elements from an array

    std::cout << "List after assign from array: ";
    for (int num : myList) std::cout << num << " ";

    return 0;
}
