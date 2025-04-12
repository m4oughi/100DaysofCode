#include "Status.h"
#include <iostream>

enum class Status : int { OK, Fail }; // Definition in CPP

void logStatus(Status s) {
    std::cout << "Status = " << static_cast<int>(s) << std::endl;
}
