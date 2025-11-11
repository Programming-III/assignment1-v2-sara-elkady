#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
Class Instructor:public Person{
private:
    string department;
    int experienceYears;
    
public:
    Instructor (string department,int experienceYears );
      Instructor ();
      ~Instructor();
    void display();
    
};


//#write Instructor class here












#endif
