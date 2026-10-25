
#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>
#include <fstream>
#include <exception>

using namespace std;

int main() {
    try {
        Person person(
            1, "Rahul", "9876543210", "Anand"
        );

        Student student(
            2, "Amit", "9876501234", "Anand",
            "Computer Engineering", "CE-A", "01-07-2026"
        );

        Faculty faculty(
            3, "Neha", "9876512345", "Anand",
            "Computer Engineering", 35000.0
        );

        cout << "=== Person Details ===\n";
        person.displayDetails();

        cout << "\n=== Student Details ===\n";
        student.displayDetails();

        cout << "\n=== Faculty Details ===\n";
        faculty.displayDetails();

        // File handling: save student details
        ofstream studentFile("students.txt");

        if (!studentFile.is_open()) {
            cerr << "Error: Could not open students.txt\n";
            return 1;
        }

        student.saveToFile(studentFile);
        studentFile.close();

        cout << "\nStudent details saved to students.txt successfully!\n";

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
