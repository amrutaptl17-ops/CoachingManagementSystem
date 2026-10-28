
#include "FeePayment.h"
#include <iostream>
#include <stdexcept>

using namespace std;

FeePayment::FeePayment(int paymentId, int studentId,
                       double amount,
                       const string& paymentDate,
                       const string& paymentMethod)
    : paymentId(paymentId),
      studentId(studentId),
      amount(amount),
      paymentDate(paymentDate),
      paymentMethod(paymentMethod) {

    if (paymentId <= 0 || studentId <= 0) {
        throw invalid_argument("IDs must be positive.");
    }

    if (amount <= 0) {
        throw invalid_argument("Amount must be positive.");
    }

    if (paymentDate.empty() || paymentMethod.empty()) {
        throw invalid_argument(
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
    cout << "Payment ID     : " << paymentId << '\n';
    cout << "Student ID     : " << studentId << '\n';
    cout << "Amount         : Rs. " << amount << '\n';
    cout << "Payment Date   : " << paymentDate << '\n';
    cout << "Payment Method : " << paymentMethod << '\n';
}

FeePayment FeePayment::operator+(const FeePayment& other) const {
    return FeePayment(
        paymentId,
        studentId,
        amount + other.amount,
        paymentDate,
        paymentMethod
    );
}
ostream& operator<<(ostream& os, const FeePayment& payment) {
    os << "Payment ID     : " << payment.paymentId << '\n';
    os << "Student ID     : " << payment.studentId << '\n';
    os << "Amount         : Rs. " << payment.amount << '\n';
    os << "Payment Date   : " << payment.paymentDate << '\n';
    os << "Payment Method : " << payment.paymentMethod << '\n';

    return os;
}
