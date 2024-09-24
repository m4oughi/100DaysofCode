#include <iostream>

inline static int getID() {
    static int id = 0;
    return ++id;
}

void printID1() {
    std::cout << "File1 getID(): " << getID() << std::endl;
}