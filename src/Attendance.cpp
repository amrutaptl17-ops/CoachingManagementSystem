
#include "Attendance.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Attendance::Attendance(int studentId,
                       const string& attendanceDate,
                       const string& status)
    : studentId(studentId),
      attendanceDate(attendanceDate),
      status(status) {

    if (studentId <= 0) {
        throw invalid_argument(
            "Student ID must be positive.");
    }

    if (attendanceDate.empty()) {
        throw invalid_argument(
            "Attendance date cannot be empty.");
    }

    if (status != "Present" && status != "Absent") {
        throw invalid_argument(
            "Status must be Present or Absent.");
    }
}

int Attendance::getStudentId() const {
    return studentId;
}

string Attendance::getAttendanceDate() const {
    return attendanceDate;
}

string Attendance::getStatus() const {
    return status;
}

void Attendance::displayAttendance() const {
    cout << "Student ID       : " << studentId << '\n';
    cout << "Attendance Date  : " << attendanceDate << '\n';
    cout << "Status           : " << status << '\n';
}
