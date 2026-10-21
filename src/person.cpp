
#include "Person.h"
#include <iostream>
#include <stdexcept>

Person::Person(int id, const std::string& name,
               const std::string& contact,
               const std::string& address)
    : id(id), name(name), contact(contact), address(address) {

    if (id <= 0)
        throw std::invalid_argument("ID must be positive.");

    if (name.empty())
        throw std::invalid_argument("Name cannot be empty.");

    if (contact.empty())
        throw std::invalid_argument("Contact cannot be empty.");
}

int Person::getId() const {
    return id;
}

std::string Person::getName() const {
    return name;
}

std::string Person::getContact() const {
    return contact;
}

std::string Person::getAddress() const {
    return address;
}

void Person::displayDetails() const {
    std::cout << "ID      : " << id << '\n';
    std::cout << "Name    : " << name << '\n';
    std::cout << "Contact : " << contact << '\n';
    std::cout << "Address : " << address << '\n';
}
