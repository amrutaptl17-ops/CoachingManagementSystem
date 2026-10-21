
#include "FeePayment.h"
#include <iostream>
#include <stdexcept>

FeePayment::FeePayment(int paymentId, int studentId,
                       double amount,
                       const std::string& paymentDate,
                       const std::string& paymentMethod)
    : paymentId(paymentId),
      studentId(studentId),
      amount(amount),
      paymentDate(paymentDate),
      paymentMethod(paymentMethod) {

    if (paymentId <= 0 || studentId <= 0) {
        throw std::invalid_argument("IDs must be positive.");
    }

    if (amount <= 0) {
        throw std::invalid_argument("Amount must be positive.");
    }

    if (paymentDate.empty() || paymentMethod.empty()) {
        throw std::invalid_argument(
            "Date and payment method cannot be empty.");
    }
}

int FeePayment::getPaymentId() const {
    return paymentId;
}

int FeePayment::getStudentId() const {
    return studentId;
}

double FeePayment::getAmount() const {
    return amount;
}

void FeePayment::displayPayment() const {
    std::cout << "Payment ID     : " << paymentId << '\n';
    std::cout << "Student ID     : " << studentId << '\n';
    std::cout << "Amount         : Rs. " << amount << '\n';
    std::cout << "Payment Date   : " << paymentDate << '\n';
    std::cout << "Payment Method : " << paymentMethod << '\n';
}
