
#ifndef FEEMANAGER_H
#define FEEMANAGER_H

#include <vector>
#include "FeePayment.h"

class FeeManager {
private:
    std::vector<FeePayment> payments;

public:
    void addPayment(const FeePayment& payment);

    double getTotalPaidForStudent(int studentId) const;

    std::vector<FeePayment> findPaymentsByStudentId(
        int studentId
    ) const;
};

#endif
