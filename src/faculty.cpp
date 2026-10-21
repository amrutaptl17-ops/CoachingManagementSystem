
#include "Faculty.h"
#include <iostream>

Faculty::Faculty(int id, const std::string& name,
                 const std::string& contact,
                 const std::string& address,
                 const std::string& subject,
                 double salary)
    : Person(id, name, contact, address),
      subject(subject), salary(salary) {
}

void Faculty::displayDetails() const {
    std::cout << "\n=== Faculty Details ===\n";
    Person::displayDetails();
    std::cout << "Subject        : " << subject << '\n';
    std::cout << "Salary         : " << salary << '\n';
}
