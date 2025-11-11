#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Class Person :: Person (string name,int id){
this -> name= name;
this-> id= id;
void display:: display(){
cout<< "Name:"<<name<<endl;
cout<<"id:"<< id<<endl;
}
};

// ==================== Student Class Implementation ====================

Class Student:: Student (int yearLevel,string major){
this -> yearLevel= yearLevel;
this-> major= major;
void display:: display(){
cout<< "Year: "<< yearLevel<<endl;
cout<<"Major:"<< major <<endl;
}
};

// ==================== Instructor Class Implementation ====================

Class Instructor:: Instructor(string department,int experienceYears){
this -> department= department;
this-> experienceYears= experienceYears;
void display:: display(){
cout<< "Department: "<< department <<endl;
cout<<"Years of Experience:"<< experienceYears <<endl;
}
};

// ==================== Course Class Implementation ====================
Class Course::Course(string courseCode,string courseName, int maxStudents, Student* students, int currentStudents ){
this -> courseCode= courseCode;
this -> courseName= courseName;
this -> maxStudents= maxStudents;
this ->students= students[];// yarab tetla3 sah
this -> currentStudents= currentStudents;

 addStudent:: addStudent(const Student& s){
 // hashoof ba3dein
 }
displayCourseInfo::displayCourseInfo(){
cout<< "Course: "<< courseCode <<"-"<<courseName<< endl;
cout<< "Max Students: "<< maxStudents <<endl;
cout<<"Currently Enrolled:"<< students[] <<endl;
cout<< "Current Number of Students: "<< currentStudents <<endl;


}


};

// ==================== Main Function ====================
int main() {
    Course c('CS101', 'Introduction to Programming', 3 );
   c.displayCourseInfo();
   







    return 0;
}
