
#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>
using namespace std;

class Attendance {
private:
    int studentId;
    string attendanceDate;
    string status;

public:
    Attendance(int studentId,
               const string& attendanceDate,
               const string& status);

    int getStudentId() const;
    string getAttendanceDate() const;
    string getStatus() const;

    void displayAttendance() const;
};

#endif
