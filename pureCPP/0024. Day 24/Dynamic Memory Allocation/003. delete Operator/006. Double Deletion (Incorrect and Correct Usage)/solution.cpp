#include <iostream>
using namespace std;

void avoidMemoryLeak() {
    int* ptr = new int(100); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // properly deallocate memory
}

int main() {
    avoidMemoryLeak();
    return 0;
}
