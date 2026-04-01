#include "MU_Person.h"

class student:public MU_person{
private:
  double gpa; 
	
public:
  student(long=111 ,double=2.5,string="Nattawut",long = 0);
  ~student();
  void display(); // display_person
   
};

student::student(long i, double g,string s,long nat):MU_person(i,s,nat){ //************** :MU_person(i,s) ส่งข้อมูลต่อ
  // Finish constructor to set all values
  gpa=g;
  cout<<"MU student constructor  "<<gpa<<endl;
}
student::~student(){
  cout<<"-------"<<endl;
  cout<<"student destructor "<<gpa<<endl; 
}

void student::display(){
  //Finish Display function
  display_person();
  cout << "GPA: " <<gpa << endl;
}
