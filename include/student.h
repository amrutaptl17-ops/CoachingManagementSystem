
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <fstream>
using namespace std;

class Student : public Person {
private:
    string course;
    string batch;
    string admissionDate;

public:
    Student(int id, const string& name,
            const string& contact,
            const string& address,
            const string& course,
            const string& batch,
            const string& admissionDate);

    void displayDetails() const override;

    void saveToFile(ofstream& file) const;
};

#endif
