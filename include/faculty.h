
#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
#include <string>
using namespace std;

class Faculty : public Person {
private:
    string subject;
    double salary;

public:
    Faculty(int id, const string& name,
            const string& contact,
            const string& address,
            const string& subject,
            double salary);

    void displayDetails() const override;
};

#endif
