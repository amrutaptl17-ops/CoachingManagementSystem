#ifndef FEEPAYMENT_H
#define FEEPAYMENT_H

#include <string>

class FeePayment {
private:
    int paymentId;
    int studentId;
    double amount;
    std::string paymentDate;
    std::string paymentMethod;

public:
    FeePayment(int paymentId, int studentId,
               double amount, const std::string& paymentDate,
               const std::string& paymentMethod);

    int getPaymentId() const;
    int getStudentId() const;
    double getAmount() const;

    void displayPayment() const;
};

#endif