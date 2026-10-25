
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    int id;
    string name;
    string contact;
    string address;

public:
    Person(int id, const string& name,
           const string& contact,
           const string& address);

    virtual ~Person() = default;

    int getId() const;
    string getName() const;
    string getContact() const;
    string getAddress() const;

    virtual void displayDetails() const;
};

#endif
