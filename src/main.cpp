
#include "FeePayment.h"
#include "Test.h"
#include "Attendance.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>
#include <exception>

using namespace std;

int main() {
    try {
        FeePayment payment(
            1, 101, 2500.0, "21-10-2026", "UPI"
        );

        Test test(
            1, "Unit Test 1", "Mathematics",
            "25-10-2026", 100.0
        );

        Attendance attendance(
            101, "21-10-2026", "Present"
        );

        Student student(
            101, "Khushi", "9876543210",
            "Anand", "Computer Engineering",
            "CP-2025", "01-07-2025"
        );

        Faculty faculty(
            201, "Rahul Mehta", "9876501234",
            "Anand", "C++ Programming", 45000.0
        );

        cout << "=== Fee Payment Details ===\n";
        payment.displayPayment();

        cout << "\n=== Test Details ===\n";
        test.displayTest();

        cout << "\n=== Attendance Details ===\n";
        attendance.displayAttendance();

        cout << "\n=== Student Details ===\n";
        student.displayDetails();

        cout << "\n=== Faculty Details ===\n";
        faculty.displayDetails();

    } catch (const exception& e) {
        cout << "Error: " << e.what() << '\n';
    }

    return 0;
}
