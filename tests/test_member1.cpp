
#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>
#include <exception>

int main() {
    try {
        std::cout << "=== Person Test ===\n";
        Person person(1, "Rahul", "9876543210", "Anand");
        person.displayDetails();

        std::cout << "\n=== Student Test ===\n";
        Student student(
            2, "Amit", "9876501234", "Anand",
            "Computer Engineering", "CE-A", "01-07-2026"
        );
        student.displayDetails();

        std::cout << "\n=== Faculty Test ===\n";
        Faculty faculty(
            3, "Neha", "9876512345", "Anand",
            "Computer Engineering", 35000.0
        );
        faculty.displayDetails();

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
