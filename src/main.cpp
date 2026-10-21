
#include "FeePayment.h"
#include "Test.h"
#include "Attendance.h"
#include <iostream>
#include <exception>

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

        std::cout << "=== Fee Payment Details ===\n";
        payment.displayPayment();

        std::cout << "\n=== Test Details ===\n";
        test.displayTest();

        std::cout << "\n=== Attendance Details ===\n";
        attendance.displayAttendance();

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
    }

    return 0;
}
