
#include "Attendance.h"
#include <iostream>
#include <stdexcept>

Attendance::Attendance(int studentId,
                       const std::string& attendanceDate,
                       const std::string& status)
    : studentId(studentId),
      attendanceDate(attendanceDate),
      status(status) {

    if (studentId <= 0) {
        throw std::invalid_argument(
            "Student ID must be positive.");
    }

    if (attendanceDate.empty()) {
        throw std::invalid_argument(
            "Attendance date cannot be empty.");
    }

    if (status != "Present" && status != "Absent") {
        throw std::invalid_argument(
            "Status must be Present or Absent.");
    }
}

int Attendance::getStudentId() const {
    return studentId;
}

std::string Attendance::getAttendanceDate() const {
    return attendanceDate;
}

std::string Attendance::getStatus() const {
    return status;
}

void Attendance::displayAttendance() const {
    std::cout << "Student ID       : " << studentId << '\n';
    std::cout << "Attendance Date  : " << attendanceDate << '\n';
    std::cout << "Status           : " << status << '\n';
}
