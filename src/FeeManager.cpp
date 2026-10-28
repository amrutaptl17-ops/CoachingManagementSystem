
#include "FeeManager.h"
#include <stdexcept>

void FeeManager::addPayment(const FeePayment& payment) {
    if (payment.getStudentId() <= 0) {
        throw std::invalid_argument("Invalid student ID.");
    }

    if (payment.getAmount() <= 0) {
        throw std::invalid_argument("Payment amount must be positive.");
    }

    payments.push_back(payment);
}

double FeeManager::getTotalPaidForStudent(int studentId) const {
    if (studentId <= 0) {
        throw std::invalid_argument("Invalid student ID.");
    }

    double total = 0;

    for (const FeePayment& payment : payments) {
        if (payment.getStudentId() == studentId) {
            total += payment.getAmount();
        }
    }

    return total;
}

std::vector<FeePayment> FeeManager::findPaymentsByStudentId(
    int studentId
) const {
    if (studentId <= 0) {
        throw std::invalid_argument("Invalid student ID.");
    }

    std::vector<FeePayment> result;

    for (const FeePayment& payment : payments) {
        if (payment.getStudentId() == studentId) {
            result.push_back(payment);
        }
    }

    return result;
}
void FeeManager::addPayment(
    int paymentId,
    int studentId,
    double amount,
    const std::string& paymentDate,
    const std::string& paymentMethod
) {
    FeePayment payment(
        paymentId,
        studentId,
        amount,
        paymentDate,
        paymentMethod
    );

    addPayment(payment);
}