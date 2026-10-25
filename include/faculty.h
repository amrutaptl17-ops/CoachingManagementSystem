
#ifndef FACULTY_H
#define FACULTY_H

#include "person.h"
#include <string>
#include <fstream>

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

    // Save faculty details to a file
    void saveToFile(ofstream& file) const;
};

#endif
