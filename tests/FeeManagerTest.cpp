
#include <iostream>
#include <stdexcept>
#include <vector>
#include "FeeManager.h"

int main() {
    FeeManager manager;

    try {
        manager.addPayment(
            FeePayment(1, 101, 2500, "2026-10-28", "Cash")
        );

        manager.addPayment(
            FeePayment(2, 101, 1500, "2026-10-28", "UPI")
        );

        manager.addPayment(
            FeePayment(3, 102, 3000, "2026-10-28", "Cash")
        );

        double total = manager.getTotalPaidForStudent(101);

        std::cout << "Total paid by student 101: "
                  << total << '\n';

        std::vector<FeePayment> records =
            manager.findPaymentsByStudentId(101);

        std::cout << "Number of payments: "
                  << records.size() << '\n';

        if (total == 4000 && records.size() == 2) {
            std::cout << "FeeManager test successful!\n";
        } else {
            std::cout << "FeeManager test failed!\n";
            return 1;
        }
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
