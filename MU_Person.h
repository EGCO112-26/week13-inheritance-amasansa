#include "Thai_person.h"

class MU_person:public Thai_person{
private: 
protected:long id;
	string name;

public:
	MU_person(long=112 ,string ="Prapaporn",long = 0); //constructor
  void display_person();
  ~MU_person(); //destructor
};

MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n,long nat):Thai_person(nat){
  // Set up all MU_Person values
  id = x;
  name = n;
  cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout << "--- Show all info ---" << endl;
  display_thai(); // เรียกใช้ฟังก์ชันของคลาสแม่ (Thai_person)
  cout << "Student ID: " << id << endl;
  cout << "Name: " << name << endl;
}
