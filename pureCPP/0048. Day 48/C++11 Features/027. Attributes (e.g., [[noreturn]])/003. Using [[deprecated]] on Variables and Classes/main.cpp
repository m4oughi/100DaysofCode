#include <iostream>

struct [[deprecated("Use NewStruct instead.")]] OldStruct {
    int x;
};

struct NewStruct {
    int y;
};

int main() {
    OldStruct obj; // Warning: Deprecated usage
    NewStruct newObj;
    return 0;
}
