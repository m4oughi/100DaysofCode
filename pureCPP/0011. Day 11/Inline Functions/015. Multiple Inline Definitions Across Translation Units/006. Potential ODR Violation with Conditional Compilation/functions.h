#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#ifdef USE_VERSION_1
// Inline function with version 1 definition
inline void display() {
    std::cout << "Inline Function Version 1" << std::endl;
}
#else
// Inline function with version 2 definition
inline void display() {
    std::cout << "Inline Function Version 2" << std::endl;
}
#endif

#endif // FUNCTIONS_H
