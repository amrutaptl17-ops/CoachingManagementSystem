
#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include <string>

class Student : public Person {
private:
    std::string course;
    std::string batch;
    std::string admissionDate;

public:
    Student(int id, const std::string& name,
            const std::string& contact,
            const std::string& address,
            const std::string& course,
            const std::string& batch,
            const std::string& admissionDate);

    void displayDetails() const override;
};

#endif
