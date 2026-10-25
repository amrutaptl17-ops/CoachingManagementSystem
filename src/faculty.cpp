
#include "faculty.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Faculty::Faculty(int id, const string& name,
                 const string& contact,
                 const string& address,
                 const string& subject,
                 double salary)
    : Person(id, name, contact, address),
      subject(subject), salary(salary) {
}

void Faculty::displayDetails() const {
    cout << "\n=== Faculty Details ===\n";
    Person::displayDetails();
    cout << "Subject        : " << subject << '\n';
    cout << "Salary         : " << salary << '\n';
}

void Faculty::saveToFile(ofstream& file) const {
    if (!file.is_open()) {
        throw runtime_error("Could not open faculty file.");
    }

    file << getId() << ','
         << getName() << ','
         << getContact() << ','
         << getAddress() << ','
         << subject << ','
         << salary << '\n';
}
