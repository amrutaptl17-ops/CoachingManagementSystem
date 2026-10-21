
#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>

class Attendance {
private:
    int studentId;
    std::string attendanceDate;
    std::string status;

public:
    Attendance(int studentId,
               const std::string& attendanceDate,
               const std::string& status);

    int getStudentId() const;
    std::string getAttendanceDate() const;
    std::string getStatus() const;

    void displayAttendance() const;
};

#endif
