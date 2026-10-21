
#include "Test.h"
#include <iostream>
#include <stdexcept>

Test::Test(int testId, const std::string& testName,
           const std::string& subject,
           const std::string& testDate, double totalMarks)
    : testId(testId),
      testName(testName),
      subject(subject),
      testDate(testDate),
      totalMarks(totalMarks) {

    if (testId <= 0)
        throw std::invalid_argument("Test ID must be positive.");

    if (testName.empty() || subject.empty() || testDate.empty())
        throw std::invalid_argument(
            "Test name, subject and date cannot be empty.");

    if (totalMarks <= 0)
        throw std::invalid_argument(
            "Total marks must be positive.");
}

int Test::getTestId() const {
    return testId;
}

std::string Test::getTestName() const {
    return testName;
}

std::string Test::getSubject() const {
    return subject;
}

double Test::getTotalMarks() const {
    return totalMarks;
}

void Test::displayTest() const {
    std::cout << "Test ID     : " << testId << '\n';
    std::cout << "Test Name   : " << testName << '\n';
    std::cout << "Subject     : " << subject << '\n';
    std::cout << "Test Date   : " << testDate << '\n';
    std::cout << "Total Marks : " << totalMarks << '\n';
}
