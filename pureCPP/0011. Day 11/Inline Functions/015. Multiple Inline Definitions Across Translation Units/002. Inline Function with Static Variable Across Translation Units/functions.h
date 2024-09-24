#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Inline function with static variable
inline void incrementCounter() {
    static int counter = 0;
    counter++;
    std::cout << "Counter: " << counter << std::endl;
}

#endif // FUNCTIONS_H
