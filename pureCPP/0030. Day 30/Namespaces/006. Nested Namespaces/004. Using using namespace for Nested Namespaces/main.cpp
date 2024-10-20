#include <iostream>

namespace University {
    namespace Courses {
        void listCourses() {
            std::cout << "Listing all courses" << std::endl;
        }

        int totalCourses = 20;
    }
}

int main() {
    using namespace University::Courses;  // Import entire nested namespace

    listCourses();  // Direct access
    std::cout << "Total courses: " << totalCourses << std::endl;
    return 0;
}
