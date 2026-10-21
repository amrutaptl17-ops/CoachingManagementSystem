
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    int id;
    std::string name;
    std::string contact;
    std::string address;

public:
    Person(int id, const std::string& name,
           const std::string& contact,
           const std::string& address);

    virtual ~Person() = default;

    int getId() const;
    std::string getName() const;
    std::string getContact() const;
    std::string getAddress() const;

    virtual void displayDetails() const;
};

#endif
