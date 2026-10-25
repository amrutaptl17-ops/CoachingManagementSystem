
#include "Student.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Student::Student(int id, const string& name,
                 const string& contact,
                 const string& address,
                 const string& course,
                 const string& batch,
                 const string& admissionDate)
    : Person(id, name, contact, address),
      course(course), batch(batch),
      admissionDate(admissionDate) {
}

void Student::displayDetails() const {
    cout << "\n=== Student Details ===\n";
    Person::displayDetails();
    cout << "Course         : " << course << '\n';
    cout << "Batch          : " << batch << '\n';
    cout << "Admission Date : " << admissionDate << '\n';
}

void Student::saveToFile(ofstream& file) const {
    if (!file.is_open()) {
        throw runtime_error("Could not open student file.");
    }

    file << getId() << ','
         << getName() << ','
         << getContact() << ','
         << getAddress() << ','
         << course << ','
         << batch << ','
         << admissionDate << '\n';
}
