#include <iostream>
using namespace std;

class Tracker {
private:
    static int activeObjects;  // Tracks active objects

public:
    Tracker() {
        activeObjects++;
    }

    ~Tracker() {
        activeObjects--;
    }

    static int getActiveObjects() {
        return activeObjects;
    }
};

// Initialize static member
int Tracker::activeObjects = 0;

int main() {
    Tracker t1, t2;
    cout << "Active objects: " << Tracker::getActiveObjects() << endl;

    {
        Tracker t3;
        cout << "Active objects: " << Tracker::getActiveObjects() << endl;
    }

    cout << "Active objects: " << Tracker::getActiveObjects() << endl;

    return 0;
}
