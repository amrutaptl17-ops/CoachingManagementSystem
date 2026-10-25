
#include "Faculty.h"
#include <iostream>

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
