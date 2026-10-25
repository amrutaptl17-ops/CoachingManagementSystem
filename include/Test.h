
#ifndef TEST_H
#define TEST_H

#include <string>
using namespace std;

class Test {
private:
    int testId;
    string testName;
    string subject;
    string testDate;
    double totalMarks;

public:
    Test(int testId, const string& testName,
         const string& subject,
         const string& testDate, double totalMarks);

    int getTestId() const;
    string getTestName() const;
    string getSubject() const;
    double getTotalMarks() const;

    void displayTest() const;
};

#endif
