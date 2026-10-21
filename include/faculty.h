
#ifndef FACULTY_H
#define FACULTY_H

#include "person.h"
#include <string>

class Faculty : public Person {
private:
    std::string subject;
    double salary;

public:
    Faculty(int id, const std::string& name,
            const std::string& contact,
            const std::string& address,
            const std::string& subject,
            double salary);

    void displayDetails() const override;
};

#endif
