
#include "Test.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Test::Test(int testId, const string& testName,
           const string& subject,
           const string& testDate, double totalMarks)
    : testId(testId),
      testName(testName),
      subject(subject),
      testDate(testDate),
      totalMarks(totalMarks) {

    if (testId <= 0)
        throw invalid_argument("Test ID must be positive.");

    if (testName.empty() || subject.empty() || testDate.empty())
        throw invalid_argument(
            "Test name, subject and date cannot be empty.");

    if (totalMarks <= 0)
        throw invalid_argument(
            "Total marks must be positive.");
}

int Test::getTestId() const {
    return testId;
}

string Test::getTestName() const {
    return testName;
}

string Test::getSubject() const {
    return subject;
}

double Test::getTotalMarks() const {
    return totalMarks;
}

void Test::displayTest() const {
    cout << "Test ID     : " << testId << '\n';
    cout << "Test Name   : " << testName << '\n';
    cout << "Subject     : " << subject << '\n';
    cout << "Test Date   : " << testDate << '\n';
    cout << "Total Marks : " << totalMarks << '\n';
}
