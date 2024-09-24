// utils.h
#pragma once

static inline int divide(int a, int b) {
    return (b != 0) ? a / b : 0; // Prevent division by zero
}
