#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
Class Course:public Student{
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course(string courseCode,string courseName, int maxStudents, Student* students, int currentStudents );
    Course();
    ~Course();
    
    addStudent(const Student& s);
    displayCourseInfo();
}
//#write your code here














#endif
