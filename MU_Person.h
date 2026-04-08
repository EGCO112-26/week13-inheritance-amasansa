#include "NODE.h"
using namespace std;
class MU_person:public NODE{
private: 
  // long id;
	// string name;
protected:
  long id;
	string name;

public:
	MU_person(long=112, string = "Pakchee"); //รับมาจาก thai 2 ค่า เลยต้องเพิ่มมาอีก 2 ค่า
  void display_person();
  ~MU_person();
};

MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<std::endl;
}
MU_person::MU_person(long x,string n):NODE(x){
  id = x;
  name = n;
  cout<<"MU person constructor "<<id<<std::endl;
}

void MU_person::display_person(){
  cout<<"Show info per person"<<std::endl;
  cout<<"Name: "<<name<<std::endl;
  cout<<"id: "<<id<<std::endl;
  cout<<std::endl;
}