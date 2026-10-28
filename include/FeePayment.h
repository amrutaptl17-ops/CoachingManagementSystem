#ifndef FEEPAYMENT_H
#define FEEPAYMENT_H

#include <string>
#include <iostream>

using namespace std;

class FeePayment {
private:
    int paymentId;
    int studentId;
    double amount;
    string paymentDate;
    string paymentMethod;

public:
    FeePayment(int paymentId, int studentId,
               double amount, const string& paymentDate,
               const string& paymentMethod);

    int getPaymentId() const;
    int getStudentId() const;
    double getAmount() const;

    void displayPayment() const;

    FeePayment operator+(const FeePayment& other) const;

    friend ostream& operator<<(ostream& os,
                               const FeePayment& payment);
};

#endif