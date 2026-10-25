
#include "Person.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Person::Person(int id, const string& name,
               const string& contact,
               const string& address)
    : id(id), name(name), contact(contact), address(address) {

    if (id <= 0)
        throw invalid_argument("ID must be positive.");

    if (name.empty())
        throw invalid_argument("Name cannot be empty.");

    if (contact.empty())
        throw invalid_argument("Contact cannot be empty.");
}

int Person::getId() const {
    return id;
}

string Person::getName() const {
    return name;
}

string Person::getContact() const {
    return contact;
}

string Person::getAddress() const {
    return address;
}

void Person::displayDetails() const {
    cout << "ID      : " << id << '\n';
    cout << "Name    : " << name << '\n';
    cout << "Contact : " << contact << '\n';
    cout << "Address : " << address << '\n';
}
