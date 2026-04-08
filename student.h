#include "MU_Person.h"

class student:public MU_person{
private:
  double gpa; 
	
public:
  student(long=111 ,double=2.5,string="Nattawut");
  ~student();
  void display(); // display_person
};

student::student(long i, double g, string s):MU_person(i,s)/*send info to MU_person*/{
  id = i;
  gpa = g;
  name = s;
  cout<<"MU student constructor  "<<gpa<<endl;
}
student::~student(){
  cout<<"-------"<<endl;
  cout<<"student destructor "<<gpa<<endl; 
}

void student::display(){
  display_person();
  cout<<"Gpa: "<<gpa<<endl;
}