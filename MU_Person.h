#ifndef MU_PERSON_H
#define MU_PERSON_H
#include "Thai_person.h"

class MU_person:public Thai_person
{
protected:
  long id;
	string name;

public:
	MU_person(long=112,string="Prapaporn",long=0); //constructor
  void display_person();
  ~MU_person(); //destructor
  long get_id(){ return id; }
};

inline MU_person::~MU_person(){}
inline MU_person::MU_person(long x,string n,long nat):Thai_person(nat)
{
  id=x;
  name=n;
  cout<<"MU person constructor "<<id<<endl;
}

inline void MU_person::display_person()
{
  cout <<"--- Show all info ---" <<endl;
  display_thai();
  cout <<"Student ID: " <<id <<endl;
  cout <<"Name: " <<name <<endl;
}

#endif