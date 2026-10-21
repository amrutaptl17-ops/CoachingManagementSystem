
#include "FeePayment.h"
#include <iostream>
#include <exception>

int main() {
    try {
        FeePayment payment(
            1,                  // Payment ID
            101,                // Student ID
            2500.0,             // Amount
            "21-10-2026",       // Payment Date
            "UPI"               // Payment Method
        );

        std::cout << "=== Fee Payment Details ===\n";
        payment.displayPayment();

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
    }

    return 0;
}
