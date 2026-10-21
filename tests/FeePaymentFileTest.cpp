
#include "FeePayment.h"
#include <fstream>
#include <iostream>
#include <string>

int main() {
    FeePayment payment(
        1, 101, 2500.0, "21-10-2026", "UPI"
    );

    std::ofstream out("data/fee_payments.txt");

    if (!out) {
        std::cout << "Could not open the file.\n";
        return 1;
    }

    out << payment.getPaymentId() << ','
        << payment.getStudentId() << ','
        << payment.getAmount() << '\n';

    out.close();

    std::ifstream in("data/fee_payments.txt");

    if (!in) {
        std::cout << "Could not read the file.\n";
        return 1;
    }

    std::string line;
    std::getline(in, line);

    std::cout << "Saved record: " << line << '\n';
    std::cout << "File handling test successful!\n";

    return 0;
}
