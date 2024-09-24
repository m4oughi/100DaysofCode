#ifndef COUNTER_H
#define COUNTER_H

inline static int counter() {
    static int count = 0;
    return ++count;
}

#endif // COUNTER_H