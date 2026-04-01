#ifndef STUDENT_H
#define STUDENT_H
#include "MU_Person.h"

class student:public MU_person
{
private:
  double gpa; 
	
public:
  student(long=111,double=2.5,string="Nattawut",long=0);
  ~student();
  void display();
};

inline student::student(long i,double g,string s,long nat):MU_person(i,s,nat)
{ //************** :MU_person(i,s) ส่งข้อมูลต่อ
  gpa=g;
  cout <<"MU student constructor "<<gpa <<endl;
}
inline student::~student(){}
inline void student::display()
{
  display_person();
  cout <<"GPA: " <<gpa <<endl;
}
#endif