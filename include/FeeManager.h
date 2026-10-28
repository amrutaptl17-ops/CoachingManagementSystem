
#ifndef FEEMANAGER_H
#define FEEMANAGER_H

#include <vector>
#include "FeePayment.h"

class FeeManager {
private:
    std::vector<FeePayment> payments;

public:
    void addPayment(const FeePayment& payment);

    void addPayment(int paymentId, int studentId,
                double amount, const std::string& paymentDate,
                const std::string& paymentMethod);

    double getTotalPaidForStudent(int studentId) const;

    std::vector<FeePayment> findPaymentsByStudentId(
        int studentId
    ) const;
};

#endif
