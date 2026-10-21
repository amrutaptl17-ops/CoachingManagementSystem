
#include "Student.h"
#include <iostream>

Student::Student(int id, const std::string& name,
                 const std::string& contact,
                 const std::string& address,
                 const std::string& course,
                 const std::string& batch,
                 const std::string& admissionDate)
    : Person(id, name, contact, address),
      course(course), batch(batch),
      admissionDate(admissionDate) {
}

void Student::displayDetails() const {
    std::cout << "\n=== Student Details ===\n";
    Person::displayDetails();
    std::cout << "Course         : " << course << '\n';
    std::cout << "Batch          : " << batch << '\n';
    std::cout << "Admission Date : " << admissionDate << '\n';
}
