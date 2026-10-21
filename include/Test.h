
#ifndef TEST_H
#define TEST_H

#include <string>

class Test {
private:
    int testId;
    std::string testName;
    std::string subject;
    std::string testDate;
    double totalMarks;

public:
    Test(int testId, const std::string& testName,
         const std::string& subject,
         const std::string& testDate, double totalMarks);

    int getTestId() const;
    std::string getTestName() const;
    std::string getSubject() const;
    double getTotalMarks() const;

    void displayTest() const;
};

#endif
